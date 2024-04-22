#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <string>
#include <iostream>
#include <fstream>

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define WHITE   "\033[37m"
#define RED    "\033[31m"

void replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2);

#endif