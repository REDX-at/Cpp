/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:57:04 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/22 08:39:36 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : target(""), name("Shrubbery"), gradeToSign(145), gradeToExecute(137)
{
    std::cout << "default contructor ShrubberyCreationForm called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : target(target), name("Shrubbery"), gradeToSign(145), gradeToExecute(137)
{
    std::cout << "parametric contructor ShrubberyCreationForm called\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "destructor contructor ShrubberyCreationForm called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
    
}

const std::string & ShrubberyCreationForm::getName() const
{
    return this->name;
}

int ShrubberyCreationForm::getGradeToSign() const
{
    return this->gradeToSign;
}

int ShrubberyCreationForm::getGradeToExecute() const
{
    return this->gradeToExecute;
}

std::ostream& operator<<(std::ostream& os, const ShrubberyCreationForm& b)
{
    os << std::endl;
    os << "to execute : " << b.getGradeToExecute() << std::endl;
    os << "to sign : " << b.getGradeToSign() << std::endl;
    os << "name : " << b.getName() << std::endl;
    os << "target : " << b.getTarget() << std::endl;
    os << std::endl;
    return os;
}

const std::string & ShrubberyCreationForm::getTarget() const
{
    return this->target;
}

void    ShrubberyCreationForm::createShrubberyFile() const
{
    if (this->target.empty())
    {
        std::cerr << "Error: Target is empty" << std::endl;
        return;
    }
    std::string filename = this->target + "_shrubbery";
    std::ofstream file(filename);

    std::cout << "Im in the create\n";
    if (file.is_open())
    {
        file << "      ^\n";
        file << "     ^^^\n";
        file << "    ^^^^^\n";
        file << "   ^^^^^^^\n";
        file << "    |||\n";
        file << "    |||\n";

        file.close();
        std::cout << "Shrubbery created: " << filename << std::endl;
    }
    else
    {
        std::cerr << "Error: Could not create file " << filename << std::endl;
    }
}