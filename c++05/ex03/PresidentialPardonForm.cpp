/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 00:42:17 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/23 00:59:56 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential", 25, 5), target("")
{
    std::cout << "Default constructor PresidentialPardonForm called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("Presidential", 25, 5), target(target)
{
    std::cout << "Parametric constructor PresidentialPardonForm called\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destructor PresidentialPardonForm called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other), target(other.target)
{
    std::cout << "Copy constructor PresidentialPardonForm called\n";
}

const std::string& PresidentialPardonForm::getTarget() const
{
    return this->target;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
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

void    PresidentialPardonForm::performeAction() const
{
    std::cout << this->target << " has been pardoned by Zaphod Beeblerox" << std::endl;
}