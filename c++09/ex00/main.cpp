/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 11:41:46 by aitaouss          #+#    #+#             */
/*   Updated: 2024/12/20 11:17:06 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
    BitcoinExchange btcIns;

    if  (ac != 2) {
        std::cerr << "Arg Not valid." << std::endl;
        return 1;
    }

    if (!btcIns.fill_map()) {
        return 1;
    }

    std::string str(av[1]);
    
    if (!btcIns.handle_input_file(str))
        return 1;

    return 0;
}