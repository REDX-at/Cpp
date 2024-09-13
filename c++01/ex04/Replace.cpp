/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:37:05 by aitaouss          #+#    #+#             */
/*   Updated: 2024/07/08 16:43:53 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

void replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2) 
{
    std::ifstream inputFile(filename);
    if (!inputFile.is_open())
    {
        std::cerr << RED << "Error: " << WHITE << "Unable to open input file." << std::endl;
        return;
    }

    std::ofstream outputFile(filename + ".replace");
    if (!outputFile.is_open()) 
    {
        std::cerr << RED << "Error: " << WHITE << "Unable to create output file." << std::endl;
        inputFile.close();
        return;
    }

    std::string line;
    while (std::getline(inputFile, line)) 
    {
        size_t pos = 0;
        if (s1.length() == 0)
        {
            break;
        }
        while ((pos = line.find(s1, pos)) != std::string::npos) 
        {
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos += s2.length();
        }
        if (inputFile.eof())
            outputFile << line;
        else
            outputFile << line << std::endl;
    }

    std::cout << WHITE << "Replacement Done " << GREEN << "√" << std::endl;

    inputFile.close();
    outputFile.close();
}
