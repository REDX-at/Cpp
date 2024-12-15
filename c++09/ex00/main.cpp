/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 11:41:46 by aitaouss          #+#    #+#             */
/*   Updated: 2024/12/15 17:22:48 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
    BitcoinExchange btcIns;

    if  (ac != 2) {
        std::cerr << "Arg Not valid." << std::endl;
        return 1;
    }

    btcIns.fill_map();
    // std::map<std::string, double>::iterator it;
    
    std::string str(av[1]);
    
    if (!btcIns.handle_input_file(str))
        return 1;

    // for (it = btcIns.exchangeRates.begin(); it != btcIns.exchangeRates.end(); ++it) {
    //     std::cout << it->first << std::endl;
    // }

    return 0;
}