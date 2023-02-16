#include <iostream>

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    //std::cin >> name;

    /*
    if (name.length() > 12)
    {
        std::cout << "Your name can't be over 12 characters";
    } 
    else
    {
        std::cout << "Welcome " << name;
    }
    */
    /*
    if (name.empty())
    {
        std::cout << "You didn't enter your name";
    }
    else
    {
        std::cout << "Hello " << name;
    }
    */

    /*
    name.clear();
    std::cout << "Hello" << name;
    */
    /*
    name.append("@gmail.com");
    std::cout << "Your username is now " << name;
    */
    /*      
    std::cout << name.at(3);
    */
    /*
    name.insert(3, "@");
    std::cout << name; //den@eme
    */
    /*
    std::cout << name.find(' '); // until this number of letter
    */
    /*
    name.erase(1, 2);
    std::cout << name; //Erase two letter after 1 letter Tugba == Tba
    */

    

    return 0;
}