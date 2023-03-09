#include <iostream>

void happyBirthday(std::string name, int year);

int main()
{
    std::string name = "Bro";
    int age = 21;

    happyBirthday(name, age);

    return 0;
}

void happyBirthday(std::string birthdayBoi, int year)
{
    std::cout << "Happy Birthday to " << birthdayBoi <<'\n';
    std::cout << "Happy Birthday to "<< birthdayBoi <<'\n';
    std::cout << "Happy Birthday dear "<< birthdayBoi <<'\n';
    std::cout << "Happy Birthday to "<< birthdayBoi <<'\n';
    std::cout << "You are "<< year <<" years old!\n";
}