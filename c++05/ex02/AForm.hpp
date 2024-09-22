/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:50:04 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/22 22:41:03 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include "Bureaucrat.hpp"

class AForm
{
    private:
        const       std::string name;
        bool        sign;
        const int   gradeToSign;
        const int   gradeToExecute;
        const       std::string target;
    public:
        AForm();
        AForm(const std::string& name, const std::string& target);
        virtual ~AForm();
        AForm(const AForm &other);
        AForm(const std::string &name, int gradeToSign, int gradeToExecute);
        virtual const std::string& getName() const;
        virtual int getGradeToSign() const;
        virtual int getGradeToExecute() const;
        bool getSign() const;
        void    beSigned(const Bureaucrat& b);
        void    signAForm();
        virtual const std::string& getTarget() const;
        virtual void execute(Bureaucrat const & executor) const = 0;
        class GradeTooHighException : public std::exception
        {
            const char* what() const throw();   
        };
        class GradeTooLowException : public std::exception
        {
            const char* what() const throw();   
        };
        class NotSignedException : public std::exception
        {
            const char* what() const throw();   
        };
};

std::ostream& operator<<(std::ostream& os, const AForm& b);