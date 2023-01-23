#include <iostream>

int main()
{
    // Const yazdığında daha sonraki bir tanımlamayı kabul etmez. 
    // Sadece double yazıldığında en son ne tanımladıysa onu kabul eder, işeleme onu katar.
    // büyük küçük harf dikkat et, PI != pi
    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2*PI*radius;

    std::cout << circumference << "cm";

    return 0;

}