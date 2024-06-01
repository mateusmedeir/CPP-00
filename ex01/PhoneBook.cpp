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
    this->_contacts[this->_index % 8].setFirstName(input);

    input.clear();
    std::cout << "Last name: ";
    std::getline(std::cin, input);
    this->_contacts[this->_index % 8].setLastName(input);

    input.clear();
    std::cout << "Nickname: ";
    std::getline(std::cin, input);
    this->_contacts[this->_index % 8].setNickname(input);

    input.clear();
    std::cout << "Phone number: ";
    std::getline(std::cin, input);
    this->_contacts[this->_index % 8].setPhoneNumber(input);

    input.clear();
    std::cout << "Darkest secret: ";
    std::getline(std::cin, input);
    this->_contacts[this->_index % 8].setDarkestSecret(input);
    
    this->_index++;
    if (this->_size < 8)
        this->_size++;
}

void    PhoneBook::search() {
    for(int i = 0; i < this->_size; i++) {
        std::cout << "| ";
        
        std::cout << std::setw(10) << i + 1;

        std::cout << " | ";

        if (this->_contacts[i].getFirstName().length() > 10)
            std::cout << this->_contacts[i].getFirstName().substr(0, 9) << ".";
        else
            std::cout << std::setw(10) << this->_contacts[i].getFirstName();
        
        std::cout << " | ";

        if (this->_contacts[i].getLastName().length() > 10)
            std::cout << this->_contacts[i].getLastName().substr(0, 9) << ".";
        else
            std::cout << std::setw(10) << this->_contacts[i].getLastName();

        std::cout << " | ";

        if (this->_contacts[i].getNickname().length() > 10)
            std::cout << this->_contacts[i].getNickname().substr(0, 9) << ".";
        else
            std::cout << std::setw(10) << this->_contacts[i].getNickname();

        std::cout << " |" << std::endl;
    }
}