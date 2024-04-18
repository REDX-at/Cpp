#include <iostream>
#include <string>
#include "contact.hpp"
#include "phonebook.hpp"

int main() {
    PhoneBook phonebook;
    std::string command;

    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::cin >> command;

        if (command == "ADD") {
            Contact new_contact;
            std::cout << "Enter first name: ";
            std::cin >> new_contact.first_name;
            std::cout << "Enter last name: ";
            std::cin >> new_contact.last_name;
            std::cout << "Enter nickname: ";
            std::cin >> new_contact.nickname;
            std::cout << "Enter phone number: ";
            std::cin >> new_contact.phone_number;
            std::cout << "Enter darkest secret: ";
            std::cin.ignore();
            std::getline(std::cin, new_contact.darkest_secret);
            phonebook.add_contact(new_contact);
        } else if (command == "SEARCH") {
            // display all the saved contact
            for (int i = 0; i < phonebook.contact_count; i++) {
                std::cout << "\n" << "Contact " << i + 1 << std::endl;
                std::cout << i << ". ";
                phonebook.display_contact(i);
            }
        } else if (command == "EXIT") {
            std::cout << "Exiting program. Contacts will be lost forever!" << std::endl;
            break;
        } else {
            std::cout << "Invalid command. Please try again." << std::endl;
        }
    }

    return 0;
}
