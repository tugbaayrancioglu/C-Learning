#include <iostream>

int main()
{
    //condition ? exp1 : exp2;

    //int grade = 50;
    //grade >= 60 ? std::cout << "You pass!" : std::cout << "You Fail!";

    //int number = 9;
    //number % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN";

    bool hungry = true;
    //hungry ? std::cout << "You are hungry" : std::cout << "You are full";
    std::cout << (hungry ? "You are hungry" : "You are full");

    return 0;
}