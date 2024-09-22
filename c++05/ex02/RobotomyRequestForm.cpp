/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:52:40 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/22 23:36:20 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy", 72, 45), target("")
{
    std::cout << "Default constructor RobotomyRequestForm called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("Robotomy", 72, 45), target(target)
{
    std::cout << "Parametric constructor RobotomyRequestForm called\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor RobotomyRequestForm called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other), target(other.target)
{
    std::cout << "Copy constructor RobotomyRequestForm called\n";
}

const std::string& RobotomyRequestForm::getTarget() const
{
    return this->target;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
    if (!this->getSign())
    {
        throw AForm::NotSignedException();
    }
    if (executor.getGrade() > this->getGradeToExecute())
    {
        throw AForm::GradeTooLowException();
    }
    
    std::cout << "Drilling noises..." << std::endl;

    std::srand(std::time(NULL));
    if (std::rand() % 2)
    {
        std::cout << this->target << " has been robotomized successfully 50% of the time" << std::endl;
    }
    else
    {
        std::cout << "Robotomy failed on " << this->target << "!" << std::endl;
    }
}