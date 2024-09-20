/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 22:01:31 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/20 22:45:47 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
    private:
        const       std::string name;
        bool        sign;
        const int   gradeToSign;
        const int   gradeToExecute;
    public:
        Form();
        Form(const std::string& name);
        ~Form();
        Form(const Form &other);
        const std::string& getName() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        void    beSigned(const Bureaucrat& b);
        void    signForm();
        // class GradeTooHighException : public std::exception
        // {
        //     const char* what() const throw();   
        // };
        class GradeTooLowException : public std::exception
        {
            const char* what() const throw();   
        };
};

// std::ostream& operator<<(std::ostream& os, const Form& b);