/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 11:31:45 by aitaouss          #+#    #+#             */
/*   Updated: 2024/12/14 19:39:53 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

class BitcoinExchange
{
    private:
        std::string date_value;
    public:
        std::map<std::string, double> exchangeRates;

        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange & other);
        ~BitcoinExchange();
        BitcoinExchange & operator=(const BitcoinExchange & other);

        bool    handle_input_file(std::string & filename);
        void    fill_map();
        void    parse_line(std::string line);
        void    parse_date(std::string date);
        void    parse_value(std::string date);
};
