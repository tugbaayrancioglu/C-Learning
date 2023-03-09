#include <iostream>

void printNum();

int myNum = 3;

int main()
{
    int myNum = 1;

    std::cout << myNum;
    std::cout << std::endl;
    printNum();
    std::cout << std::endl;

    return 0;
}

void printNum()
{
    int myNum = 2;
    std::cout << myNum << '\n';
}

