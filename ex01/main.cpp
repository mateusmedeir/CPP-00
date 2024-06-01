#include "PhoneBook.hpp"

int main() {
    std::string command;
    PhoneBook phone_book;

    while (1)
    {
        std::cout << "Enter a command: ";
    std::getline(std::cin, command);
        if (!command.compare("ADD"))
            phone_book.add();
        else if (!command.compare("SEARCH"))
            phone_book.search();
        else if (!command.compare("EXIT"))
            break;

    }
    return 0;
}