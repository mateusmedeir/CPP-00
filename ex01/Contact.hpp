#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

class   Contact {
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_number;
        std::string _darkest_secret;
    public:
        Contact();
        ~Contact();
        std::string getFirstName();
        std::string getLastName();
        std::string getNickname();
        std::string getPhoneNumber();
        std::string getDarkestSecret();
        void setFirstName(std::string first_name);
        void setLastName(std::string last_name);
        void setNickname(std::string nickname);
        void setPhoneNumber(std::string phone_number);
        void setDarkestSecret(std::string darkest_secret);
};

#endif