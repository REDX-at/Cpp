/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 07:55:12 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/22 08:38:35 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        const       std::string target;
        const       std::string name;
        const int   gradeToSign;
        const int   gradeToExecute;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string& target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& other);
        const std::string& getName() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        void    createShrubberyFile() const;
        const std::string& getTarget() const;
};

std::ostream& operator<<(std::ostream& os, const AForm& b);