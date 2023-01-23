#include <iostream>

int main()
{
    /*
        int x = 5; //decleration
        int y = 6;
        int sum = 5+6;
        
        //x = 5;
        
        std::cout << x << '\n';
        std::cout << y << '\n';
        std::cout << sum << '\n';
        return 0;
    */

   //integer (whole number)

    int age = 21;
    int year = 2023;
    int days = 7.5;

    //std::cout << days;   //7

    //double (number including decimal)

    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    //std::cout << price << '\n';

    //single character

    char grade = 'A';
    char initial = 'C';
    char dollar = '$';

    //std::cout << initial; //C

    //std::cout << dollar; //$

    //boolean (true or false)

    bool student = false; 
    bool power = true;
    bool forSale = true;

    //string (objects that represents a sequence of text)
    std::string name = "Bro";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string adress = "123 Fake St.";

    std::cout << "Hello " << name << std::endl; 
    std::cout << "You are " << age << " years old." << std::endl; 

    return 0;
    
}