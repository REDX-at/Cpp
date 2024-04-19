#include "phonebook.hpp" // for Contact, PhoneBook
#include <iostream> // for std::cout, std::cin
#include <iomanip> // for std::setw

std::string truncateString(const std::string &str, int maxLength);
bool isNumber(const std::string &str);

int main()
{
    std::string command;
    PhoneBook phonebook;
    std::cout << "Welcome to the phonebook!" << std::endl;
    phonebook.contact_count = 0;

    while (command != "EXIT")
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::cin >> command;

        if (command == "ADD")
        {
            if (phonebook.contact_count < 8)
            {
                Contact new_contact;
                std::cout << "Enter first name: ";
                std::cin >> new_contact.first_name;
                std::cout << "Enter last name: ";
                std::cin >> new_contact.last_name;
                std::cout << "Enter nickname: ";
                std::cin >> new_contact.nickname;
                std::cout << "Enter phone number: ";
                std::cin >> new_contact.phone_number;
                std::cout << "Enter dark secret: ";
                std::cin >> new_contact.darksecret;
                phonebook.contacts[phonebook.contact_count] = new_contact;
                phonebook.contact_count++;
            }
        }
        else if (command == "SEARCH")
        {
            std::cout << std::setw(10) << "Index" << "|"
                      << std::setw(10) << "First Name" << "|"
                      << std::setw(10) << "Last Name" << "|"
                      << std::setw(10) << "Nickname" << "|" << std::endl;

            for (int i = 0; i < phonebook.contact_count; ++i)
            {
                std::cout << std::setw(10) << i << "|"
                          << std::setw(10) << truncateString(phonebook.contacts[i].first_name, 10) << "|"
                          << std::setw(10) << truncateString(phonebook.contacts[i].last_name, 10) << "|"
                          << std::setw(10) << truncateString(phonebook.contacts[i].nickname, 10) << "|" << std::endl;
            }
            int index;
            std::cout << "Enter the index of the entry to display: ";
            if (!(std::cin >> index))
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input. Please enter a number." << std::endl;
                continue;
            }
            if (index >= 0 && index < phonebook.contact_count)
            {
                std::cout << "First Name: " << phonebook.contacts[index].first_name << std::endl;
                std::cout << "Last Name: " << phonebook.contacts[index].last_name << std::endl;
                std::cout << "Nickname: " << phonebook.contacts[index].nickname << std::endl;
                std::cout << "Phone Number: " << phonebook.contacts[index].phone_number << std::endl;
                std::cout << "Dark Secret: " << phonebook.contacts[index].darksecret << std::endl;
            }
            else
            {
                std::cout << "Invalid index!" << std::endl;
            }
        }
        else if (command == "EXIT")
        {
            break;
        }
    }

    return 0;
}

std::string truncateString(const std::string &str, int maxLength)
{
    if (str.length() <= static_cast<size_t>(maxLength))
    {
        return str;
    }
    else
    {
        return str.substr(0, maxLength - 1) + ".";
    }
}

bool isNumber(const std::string& str)
{
    for (size_t i = 0; i < str.length(); ++i)
    {
        if (!std::isdigit(str[i]))
        {
            return false;
        }
    }
    return true;
}