/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 10:18:35 by aitaouss          #+#    #+#             */
/*   Updated: 2024/07/03 10:44:59 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int check_digit(std::string str)
{
    for (int i = 0; i < (int)str.length(); i++)
    {
        if (!isdigit(str[i]))
            return 0;
    }
    return 1;
}

int PhoneBook::stringtoint(std::string str)
{
    int i = 0;
    int res = 0;
    while (str[i] != '\0')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return res;
}

PhoneBook::PhoneBook()
{
    contactCount = 0;
    x = 0;
}

PhoneBook::~PhoneBook()
{
}

PhoneBook::PhoneBook(const PhoneBook &phoneBook)
{
    (void)phoneBook;
}

void PhoneBook::addContact(PhoneBook &phoneBook)
{
        Contact newContact;
        std::cout << "Enter first name: ";
        if (!std::getline(std::cin, newContact.firstName))
            exit(0);
        if (!newContact.firstName.length())
        {
            std::cout << "Invalid first name\n";
            return;
        }
        std::cout << "Enter last name: ";
        if (!std::getline(std::cin, newContact.lastName))
            exit(0);
        if (!newContact.lastName.length())
        {
            std::cout << "Invalid last name\n";
            return;
        }
        std::cout << "Enter nickname: ";
        if (!std::getline(std::cin, newContact.nickname))
            exit(0);
        if (!newContact.nickname.length())
        {
            std::cout << "Invalid nickname\n";
            return;
        }
        std::cout << "Enter phone number: ";
        if (!std::getline(std::cin, newContact.phoneNumber))
            exit(0);
        if (!check_digit(newContact.phoneNumber))
        {
           std::cout << "Invalid phone number\n";
            return;
        }
        std::cout << "Enter dark secret: ";
        if (!std::getline(std::cin, newContact.darkSecret))
            exit(0);
        if (!newContact.darkSecret.length())
        {
            std::cout << "Invalid dark secret\n";
            return;
        }
        phoneBook.contacts[x] = newContact;
        x = (x + 1) % 8;
        if (contactCount != 8)
            contactCount++;
}

void PhoneBook::searchContact()
{
    if (contactCount == 0)
    {
        std::cout << "No contacts" << std::endl;
        return;
    }
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << std::endl;
    for (int i = 0; i < contactCount; i++)
    {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << contacts[i].firstName << "|";
        std::cout << std::setw(10) << contacts[i].lastName << "|";
        std::cout << std::setw(10) << contacts[i].nickname << std::endl;
    }
    std::string index;
    std::cout << "Enter index: ";
    if (!getline(std::cin, index))
        exit(0);
    if (!check_digit(index))
    {
        std::cout << "Invalid index" << std::endl;
        return;
    }
    int i = stringtoint(index);
    std::cout << "Index: " << i << std::endl;
    if (i < 0 || i >= contactCount)
    {
        std::cout << "Invalid index" << std::endl;
        return;
    }
    if (i >= 0 && i < contactCount)
    {
        std::cout << "First Name: " << contacts[i].firstName << std::endl;
        std::cout << "Last Name: " << contacts[i].lastName << std::endl;
        std::cout << "Nickname: " << contacts[i].nickname << std::endl;
        std::cout << "Phone Number: " << contacts[i].phoneNumber << std::endl;
        std::cout << "Dark Secret: " << contacts[i].darkSecret << std::endl;
    }
    else
        std::cout << "Invalid index" << std::endl;
}
