/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 11:39:04 by aitaouss          #+#    #+#             */
/*   Updated: 2024/12/14 14:34:00 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() : name("btc") {
}

BitcoinExchange::~BitcoinExchange() {
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange & other) {
    *this = other;
}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange & other) {
    this->name = other.name;   
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

    for (size_t i = 0; i < line.length(); i++) {
        if (!std::isdigit(line[i]) && line[i] != '|' && line[i] != '-' && line[i] != ' ' && line[i] != '.') {
            std::cerr << "Digit Only" << std::endl;
            return ;
         }
    }
    std::cout << "line : " <<  line << std::endl;
}