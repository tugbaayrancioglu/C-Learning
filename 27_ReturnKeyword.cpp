#include <iostream>

double square(double length);
double cube(double length);

std::string concatStrings(std::string string1, std::string string2);

int main()
{
    double length;
    //double length = 5.0;

    std::string firstName = "Bro";
    std::string lastName = "Code";

    std::cout << "Enter measurement of the line: ";
    std::cin >> length;

    double area = square(length);
    double volume = cube(length);
    std::string name = concatStrings(firstName, lastName);

    std::cout << "Hello " << name << std::endl;
    std::cout << "Area: " << area << "cm^2\n";
    std::cout << "Volume: " << volume << "cm^3\n";

    return 0;
}

double square(double length)
{
    /*
    double result = length * length;
    return result;
    */
    return length * length;

}

double cube(double length)
{
    return length * length * length;
}

std::string concatStrings(std::string string1, std::string string2)
{
    return string1 + " " + string2;
}