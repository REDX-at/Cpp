/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:50:04 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/22 08:18:30 by aitaouss         ###   ########.fr       */
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
    public:
        AForm();
        AForm(const std::string& name);
        virtual ~AForm();
        AForm(const AForm &other);
        virtual const std::string& getName() const = 0;
        virtual int getGradeToSign() const;
        virtual int getGradeToExecute() const;
        bool getSign() const;
        void    beSigned(const Bureaucrat& b);
        void    signAForm();
        // class GradeTooHighException : public std::exception
        // {
        //     const char* what() const throw();   
        // };
        class GradeTooLowException : public std::exception
        {
            const char* what() const throw();   
        };
};

std::ostream& operator<<(std::ostream& os, const AForm& b);