/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 10:24:08 by aitaouss          #+#    #+#             */
/*   Updated: 2024/07/03 09:53:41 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
    public:
        Contact();
        ~Contact();
        Contact(const Contact &contact);
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string darkSecret;
        std::string phoneNumber;
};

#endif