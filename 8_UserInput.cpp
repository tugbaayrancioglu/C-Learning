#include <iostream>

// cout << (insetion operator)
// cin << (extraction operator)

int main()
{
    // eğer çıktının yerini değiştirirsen çıktıyı vermeyecektir. Çözüm std::ws
    
    std::string name;
    int age;

    std::cout << "What is your age?: ";
    std:: cin >> age;

    std::cout << "What is your name?: "; // full name istersen vermez
    //std:: cin >> name;
    std::getline(std::cin >> std::ws, name);

    //std::cout << "What is your age?: ";
    //std:: cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old.";
    return 0;
}