#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook()
{
    this->_size = 0;
    this->_index = 0;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::add()
{
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

void PhoneBook::search()
{
    for (int i = 0; i < this->_size; i++)
    {
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
    while (!std::cin.eof() && this->_size > 0)
    {
        std::string input;
        std::cout << "Enter an index: ";
        std::getline(std::cin, input);
        if (input.length() == 1 && input[0] >= '1' && input[0] <= '8' && input[0] - '0' <= this->_size)
        {
            int index = input[0] - '0';
            std::cout << "First name: " << this->_contacts[index - 1].getFirstName() << std::endl;
            std::cout << "Last name: " << this->_contacts[index - 1].getLastName() << std::endl;
            std::cout << "Nickname: " << this->_contacts[index - 1].getNickname() << std::endl;
            std::cout << "Phone number: " << this->_contacts[index - 1].getPhoneNumber() << std::endl;
            std::cout << "Darkest secret: " << this->_contacts[index - 1].getDarkestSecret() << std::endl;
            break;
        }
        else
            std::cout << "Invalid index." << std::endl;
    }
}