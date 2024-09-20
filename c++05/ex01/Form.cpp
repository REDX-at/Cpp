/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 22:14:39 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/20 22:47:46 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Form"), gradeToSign(1), gradeToExecute(1)
{
    std::cout << "Default constructor Form called" << std::endl;
}

Form::~Form()
{
    std::cout << "Destructor Form called" << std::endl;
}

Form::Form(const std::string& name) : name(name), gradeToSign(1), gradeToExecute(1)
{
    std::cout << "Parameterized constructor Form called" << std::endl;
}


Form::Form(const Form &other) : name(other.name), sign(other.sign), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{

}

const std::string& Form::getName() const
{
    return this->name;
}

int Form::getGradeToSign() const
{
    return this->gradeToSign;
}

int Form::getGradeToExecute() const
{
    return this->gradeToExecute;
}

void    Form::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() <= 1)
        sign = 1;
    else if (b.getGrade() > 150)
        throw GradeTooLowException();
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade is too Low";
}

void    Form::signForm()
{
    if (this->sign)
        std::cout << "Bureaucrat" << " signed" << this->getName();
    else    
        std::cout << "<bureaucrat> couldn’t sign <form> because <reason>." << std::endl;
}