#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "contact.hpp"

class PhoneBook {
public:
    Contact contacts[8];
    int contact_count;

public:
    PhoneBook() {
        contact_count = 0;
    }

    void add_contact(const Contact& contact) {
        contacts[contact_count] = contact;
        contact_count++;

        std::cout << "Contact added successfully." << std::endl;
    }
    // display all the saved contact
    void display_contact(int index) {
        if (index < 0 || index >= contact_count) {
            std::cout << "Invalid index. Please try again." << std::endl;
            return;
        }
        Contact contact = contacts[index];
        std::cout << "First name: " << contact.first_name << std::endl;
        std::cout << "Last name: " << contact.last_name << std::endl;
        std::cout << "Nickname: " << contact.nickname << std::endl;
        std::cout << "Phone number: " << contact.phone_number << std::endl;
        std::cout << "Darkest secret: " << contact.darkest_secret << std::endl;
    }
};

#endif