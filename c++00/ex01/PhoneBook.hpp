/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 10:18:38 by aitaouss          #+#    #+#             */
/*   Updated: 2024/07/03 10:45:04 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
    public:
        Contact contacts[8];
        int contactCount;
        int x;
        PhoneBook();
        ~PhoneBook();
        PhoneBook(const PhoneBook &phoneBook);
        void addContact(PhoneBook &phoneBook);
        int stringtoint(std::string str);
        void searchContact();
};

#endif