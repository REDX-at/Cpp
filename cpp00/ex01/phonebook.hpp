#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>

class Contact {
    public:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string darksecret;
    std::string phone_number;
};

class PhoneBook {
    public:
    Contact contacts[8];
    int contact_count;
};

#endif