/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:57:04 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/23 01:01:52 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery", 145, 137), target("")
{
    std::cout << "Default constructor ShrubberyCreationForm called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("Shrubbery", 145, 137), target(target)
{
    std::cout << "Parametric constructor ShrubberyCreationForm called\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor ShrubberyCreationForm called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), target(other.target)
{
    std::cout << "Copy constructor ShrubberyCreationForm called\n";
}

const std::string& ShrubberyCreationForm::getTarget() const
{
    return this->target;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
    if (!this->getSign())
    {
        throw AForm::NotSignedException();
    }
    if (executor.getGrade() > this->getGradeToExecute())
    {
        throw AForm::GradeTooLowException();
    }
    this->performeAction();
}

void    ShrubberyCreationForm::performeAction() const
{
    this->createShrubberyFile();
}

void ShrubberyCreationForm::createShrubberyFile() const
{
    if (this->target.empty())
    {
        std::cerr << "Error: Target is empty" << std::endl;
        return;
    }
    std::string filename = this->target + "_shrubbery";
    std::ofstream file(filename);

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
