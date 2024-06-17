#include <iostream>

int main(int argc, char **argv)
{
    if (argc >= 2)
    {
        for (int index = 1; index < argc; index++)
        {
            for (int counter = 0; argv[index][counter]; counter++)
                std::cout << (char)std::toupper(argv[index][counter]);
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return 0;
}