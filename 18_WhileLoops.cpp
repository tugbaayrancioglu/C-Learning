#include <iostream>

int main()
{
    std::string name;
    //Because of while it asks every time but if we write "if" instead of "while", it asks just one time.

    while(name.empty()) // 1 == 1 --> infinite
    {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name;

    return 0;
}