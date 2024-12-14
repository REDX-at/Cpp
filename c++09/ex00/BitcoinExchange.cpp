/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 11:39:04 by aitaouss          #+#    #+#             */
/*   Updated: 2024/12/14 13:23:21 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() : name("btc") {
    // std::cout << "Default Constructor Called" << std::endl;
}

BitcoinExchange::~BitcoinExchange() {
    // std::cout << "Desstructor Called" << std::endl;
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange & other) {
    // std::cout << "Copy Constructor Called" << std::endl;
    *this = other;
}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange & other) {
    // std::cout << "Assign Opertor Called" << std::endl;
    this->name = other.name;   
    return *this;
}

bool    BitcoinExchange::open_files(std::string & filename) {
    // input.txt
    std::ifstream file_input(filename);

    if (!file_input.is_open()) {
        std::cerr << "Error: could not open file." << std::endl;
        return false;
    }
    else {
        // Parse The input file
        std::string line_input;

        while (std::getline(file_input, line_input)) {
            std::cout << line_input << std::endl;
        }
    }
    std::cerr << "Input Not Parsed Yet" << std::endl;
    return false;
    // data.csv    
    std::ifstream file("data.csv");

    if (!file.is_open()) {
        std::cerr << "Error: could not open file." << std::endl;
        return false;
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
    std::map<std::string, double>::iterator it;
    for (it = exchangeRates.begin(); it != exchangeRates.end(); ++it) {
        std::cout << "Date: " << it->first << ", Exchange Rate: " << it->second << std::endl;
    }
    return true;
}