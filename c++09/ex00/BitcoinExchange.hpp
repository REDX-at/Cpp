/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 11:31:45 by aitaouss          #+#    #+#             */
/*   Updated: 2024/12/14 13:22:37 by aitaouss         ###   ########.fr       */
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
        std::string name;
    public:
        std::map<std::string, double> exchangeRates;

        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange & other);
        ~BitcoinExchange();
        BitcoinExchange & operator=(const BitcoinExchange & other);

        bool    open_files(std::string & filename);        
};
