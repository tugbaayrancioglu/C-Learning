#include <iostream>

// If some data is wrong, you can ask again.

int main()
{
    int number;
    /*
    std::cout << "Enter a positive #: ";
    std::cin >> number;

    while(number < 0)
    {
        std::cout << "Enter a positive #: ";
        std::cin >> number;
    }
    */

    do
    {
        std::cout << "Enter a positive #: ";
        std::cin >> number;
    }while (number < 0);
    
    std::cout << "The # is: " << number;

    return 0;
}