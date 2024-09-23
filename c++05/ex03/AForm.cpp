/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:52:23 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/22 22:43:23 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("AForm"), sign(false), gradeToSign(1), gradeToExecute(1)
{
    std::cout << "Default constructor AForm called" << std::endl;
}

AForm::~AForm()
{
    std::cout << "Destructor AForm called" << std::endl;
}

AForm::AForm(const std::string& name, const std::string& target) : name(name), sign(false), gradeToSign(1), gradeToExecute(1), target(target)
{
    std::cout << "Parameterized constructor AForm called" << std::endl;
}


AForm::AForm(const AForm &other) : name(other.name), sign(other.sign), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
    std::cout << "copy contructor Aform called\n";
}

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute)
    : name(name), sign(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    std::cout << "AForm constructor called\n";
}

const std::string& AForm::getName() const
{
    return this->name;
}

int AForm::getGradeToSign() const
{
    return this->gradeToSign;
}

int AForm::getGradeToExecute() const
{
    return this->gradeToExecute;
}

void    AForm::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() <= this->gradeToSign)
        sign = true;
    else
        throw GradeTooLowException();
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too Low";
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too High";
}

const char* AForm::NotSignedException::what() const throw()
{
    return "Form is not signed";
}

void    AForm::signAForm()
{
    std::cout << this->getName() << std::endl;
    if (this->sign)
        std::cout << "Bureaucrat" << " signed" << this->getName();
    else    
        std::cout << "bureaucrat couldn’t sign " << this->getName() << " because the sign is " << this->getSign() << std::endl;
}

const std::string& AForm::getTarget() const
{
    return this->target;
}

std::ostream& operator<<(std::ostream& os, const AForm& b)
{
    os << std::endl;
    os << "to execute : " << b.getGradeToExecute() << std::endl;
    os << "to sign : " << b.getGradeToSign() << std::endl;
    os << "name : " << b.getName() << std::endl;
    os << "sign : " << b.getSign() << std::endl;
    os << "target : " << b.getTarget() << std::endl;
    return os;
}

bool AForm::getSign() const
{
    return this->sign;
}