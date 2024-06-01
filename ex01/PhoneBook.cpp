#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook() {
    this->_size = 0;
    this->_index = 0;
}

PhoneBook::~PhoneBook() {}

void    PhoneBook::add() {
    std::string input;

    input.clear();
    std::cout << "First name: ";
    std::getline(std::cin, input);
    this->_contacts[this->_index % 8].set_first_name(input);

    input.clear();
    std::cout << "Last name: ";
    std::getline(std::cin, input);
    this->_contacts[this->_index % 8].set_last_name(input);

    input.clear();
    std::cout << "Nickname: ";
    std::getline(std::cin, input);
    this->_contacts[this->_index % 8].set_nickname(input);

    input.clear();
    std::cout << "Phone number: ";
    std::getline(std::cin, input);
    this->_contacts[this->_index % 8].set_phone_number(input);

    input.clear();
    std::cout << "Darkest secret: ";
    std::getline(std::cin, input);
    this->_contacts[this->_index % 8].set_darkest_secret(input);
    
    this->_index++;
    if (this->_size < 8)
        this->_size++;
}

void    PhoneBook::search() {
    for(int i = 0; i < this->_size; i++) {
        std::cout << "| ";
        
        std::cout << std::setw(10) << i + 1;

        std::cout << " | ";

        if (this->_contacts[i].get_first_name().length() > 10)
            std::cout << this->_contacts[i].get_first_name().substr(0, 9) << ".";
        else
            std::cout << std::setw(10) << this->_contacts[i].get_first_name();
        
        std::cout << " | ";

        if (this->_contacts[i].get_last_name().length() > 10)
            std::cout << this->_contacts[i].get_last_name().substr(0, 9) << ".";
        else
            std::cout << std::setw(10) << this->_contacts[i].get_last_name();

        std::cout << " | ";

        if (this->_contacts[i].get_nickname().length() > 10)
            std::cout << this->_contacts[i].get_nickname().substr(0, 9) << ".";
        else
            std::cout << std::setw(10) << this->_contacts[i].get_nickname();

        std::cout << " |" << std::endl;
    }
}