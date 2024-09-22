/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:51:52 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/22 23:32:52 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public AForm
{
    private:
        const std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string& target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm& other);
        void execute(const Bureaucrat& executor) const;
        void    createShrubberyFile() const;
        const std::string& getTarget() const;
};