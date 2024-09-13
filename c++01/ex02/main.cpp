/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:39:37 by aitaouss          #+#    #+#             */
/*   Updated: 2024/07/08 10:29:38 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* strPTR = &str;
    std::string& strREF = str;

    std::cout << "Memory address" << std::endl;
    std::cout << std::endl;
    std::cout << "str    address: " << &str << std::endl;
    std::cout << "strPTR address: " << strPTR << std::endl;
    std::cout << "strREF address: " << &strREF << std::endl;
    std::cout << "------------------------------" << std::endl;
    std::cout << std::endl;
    std::cout << "Values" << std::endl;
    std::cout << "str   : " << str << std::endl;
    std::cout << "strPTR: " << *strPTR << std::endl;
    std::cout << "strREF: " << strREF << std::endl;


    return 0;
}