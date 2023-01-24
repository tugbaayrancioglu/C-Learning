#include <iostream>

int main()
{
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    //Eğer 100 yaşından büyük olmayı üste taşırsan Output = Welcome to the site!

    if(age >= 18)
    {
        std::cout << "Welcome to the site!";
    }
    else if( age < 0)
    {
        std::cout << "You haven't been born yet!";
    }
    else if(age > 100)
    {
        std::cout << "You are too old to enter this site!";
    }
    else
    {
        std::cout << "You are not old enough to enter!";
    }

    return 0;
}