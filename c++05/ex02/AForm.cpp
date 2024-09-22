/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:52:23 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/22 08:14:08 by aitaouss         ###   ########.fr       */
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

AForm::AForm(const std::string& name) : name(name), sign(false), gradeToSign(1), gradeToExecute(1)
{
    std::cout << "Parameterized constructor AForm called" << std::endl;
}


AForm::AForm(const AForm &other) : name(other.name), sign(other.sign), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{

}

// const std::string& AForm::getName() const
// {
//     return this->name;
// }

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
    std::cout << "grade " << b.getGrade() << std::endl;
    if (b.getGrade() <= 1)
        sign = true;
    else if (b.getGrade() > 150)
        throw GradeTooLowException();
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too Low";
}

void    AForm::signAForm()
{
    std::cout << this->getName() << std::endl;
    if (this->sign)
        std::cout << "Bureaucrat" << " signed" << this->getName();
    else    
        std::cout << "bureaucrat couldn’t sign " << this->getName() << " because the sign is " << this->getSign() << std::endl;
}

std::ostream& operator<<(std::ostream& os, const AForm& b)
{
    os << std::endl;
    os << "to execute : " << b.getGradeToExecute() << std::endl;
    os << "to sign : " << b.getGradeToSign() << std::endl;
    os << "name : " << b.getName() << std::endl;
    os << "sign : " << b.getSign() ;
    os << std::endl;
    return os;
}

bool AForm::getSign() const
{
    return this->sign;
}