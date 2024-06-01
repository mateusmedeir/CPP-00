#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include "Contact.hpp"

class PhoneBook {
    private:
        int _size;
        int _index;
        Contact _contacts[8];
    public:
        PhoneBook();
        ~PhoneBook();
        void add();
        void search();
};

#endif