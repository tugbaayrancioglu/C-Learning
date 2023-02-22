#include <iostream>

int main()
{
    // pseudo-random = NOT truly random (but close)

    srand(time(NULL));

    //int num = rand() % 6; //between 0 and 32767 normally but it is between 0 and 5 because of % 6
    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;
    
    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';

    return 0;
}