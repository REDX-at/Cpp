/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:37:07 by aitaouss          #+#    #+#             */
/*   Updated: 2024/07/08 15:37:08 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include <fstream>

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define WHITE   "\033[37m"
#define RED    "\033[31m"

void replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2);

#endif