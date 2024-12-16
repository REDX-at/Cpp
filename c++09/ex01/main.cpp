/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:14:25 by aitaouss          #+#    #+#             */
/*   Updated: 2024/12/16 15:02:44 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) {

    (void)av;
    if (ac != 2) {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    RPN rpnInstance;

    rpnInstance.polish_function(av[1]);

    return 0;
}
