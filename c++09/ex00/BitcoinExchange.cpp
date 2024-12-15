/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 11:39:04 by aitaouss          #+#    #+#             */
/*   Updated: 2024/12/15 18:30:50 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() : valid(false){
}

BitcoinExchange::~BitcoinExchange() {
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange & other) {
    *this = other;
}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange & other) {
    (void)other;
    return *this;
}

bool    BitcoinExchange::handle_input_file(std::string & filename) {
    std::ifstream file_input(filename);

    if (!file_input.is_open()) {
        std::cerr << "Error: could not open file." << std::endl;
        return false;
    }
    else {
        // Parse The input file
        std::string line_input;
        
        while (std::getline(file_input, line_input)) {
            // std::cout << line_input << std::endl;
            this->parse_line(line_input);
        }
    }
    return true;
}

void    BitcoinExchange::fill_map() {
    std::ifstream file("data.csv");

    if (!file.is_open()) {
        std::cerr << "Error: could not open file." << std::endl;
        return ;
    }

    std::string line;
    std::getline(file, line);

    while (std::getline(file, line)) {
        std::string date;
        std::stringstream ss(line);
        double exchange_rate;

        std::getline(ss, date, ',');
        ss >> exchange_rate;
        this->exchangeRates[date] = exchange_rate;
    }

    file.close();
}

void    BitcoinExchange::parse_line(std::string  line) {

    int count = 0;
    
    for (size_t i = 0; i < line.length(); i++) {
        if (!std::isdigit(line[i]) && line[i] != '|' && line[i] != '-' && line[i] != ' ' && line[i] != '.') {
            std::cerr << "Error : Digit Only" << std::endl;
            return ;
        }
        if (line[i] == '|') {
            count++;
        }
        if (count > 1) {
            std::cerr << "Error : More Than '|'" << std::endl;
            return ;
        }
    }
    size_t delimiter_pos = line.find('|');

    if (delimiter_pos == std::string::npos) {
        std::cerr << "Error : bad input => " << line << std::endl;
        return ;
    }

    std::string date = line.substr(0, delimiter_pos);
    parse_date(date);

    //value
    std::string value = line.substr(delimiter_pos + 1);
    parse_value(value);
    if (!valid) {
        std::string sub_date = date.substr(0, date.length() - 1);
        std::map<std::string, double>::iterator it2 = this->exchangeRates.lower_bound(sub_date);
        if (it2 != this->exchangeRates.begin()) {
            it2--;
            std::cout << date << "=>" << value << " = " << std::atof(value.c_str()) * it2->second << std::endl;
            return ;
        }
    }

    valid = false;
}

void    BitcoinExchange::parse_date(std::string date) {

    int count = 0;
    if (date[10] != ' ') {
        std::cout << "Error : bad Input => " << date << std::endl;
        this->valid = true;
        return ;
    }
    for (size_t i = 0; i < date.length(); i++) {
        if (date[i] == '-') {
            count++;
            if (count > 2) {
                std::cout << "Error : bad Input => " << date << std::endl;
                this->valid = true;
                return ;
            }
        }
        if (date[i] == ' ' && i != 10) {
            std::cout << "Error : bad Input => " << date << std::endl;
            this->valid = true;
            return ;
        }
    }
    size_t date_delimiter = date.find('-');

    std::string year_str = date.substr(0, date_delimiter);
    
    std::string rest = date.substr(date_delimiter + 1);

    date_delimiter = rest.find('-');

    std::string month_str = rest.substr(0, date_delimiter);
    std::string day_str = rest.substr(date_delimiter + 1);

    int year = 0;
    int month = 0;
    int day = 0;

    std::stringstream ss_year(year_str);
    ss_year >> year;
    std::stringstream ss_month(month_str);
    ss_month >> month;
    std::stringstream ss_day(day_str);
    ss_day >> day;
    
    if (year < 2009 || year > 2022 || month < 1 || month > 12 || day < 1 || day > 31) {
        std::cout << "Error : bad Input => " << date << std::endl;
        this->valid = true;
        return ;
    }
    
    if (month == 2) {
        if((is_a_leapYear(year) && day > 29) || (!is_a_leapYear(year) && day > 28)) {
            std::cerr << "Error : Invalid Input" << std::endl;
            this->valid = true;
            return ;
        }
    }
    // std::cout << date << "| ";
}

void    BitcoinExchange::parse_value(std::string value) {
    double _value = 0;
    if (value.find('-') != std::string::npos) {
        std::cerr << "Error : not a positive number."<< std::endl;
        this->valid = true;
        return;
    }
    for (size_t i = 0; i < value.length(); i++) {
        if (value[i] == '.'){
            _value++;
            if (_value > 2) {
                std::cerr << "Error : bad Value of btc => " << value << std::endl;
                this->valid = true;
                return ;
            }
        }
    }
    if (value.length() > 5 ) {
        std::cerr << "Error : Invalid Input" << std::endl;
        this->valid = true;
        return ;
    }

    std::stringstream ss(value);
    ss >> _value;

    if (_value < 0 || _value > 1000 ) {
        _value < 0 ? std::cerr << "Error :  not a positive number." << std::endl : std::cerr << "Error : too large a number" << std::endl;
        this->valid = true;
        return ;
    }
    // std::cout << _value << std::endl;
}

bool BitcoinExchange::is_a_leapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
