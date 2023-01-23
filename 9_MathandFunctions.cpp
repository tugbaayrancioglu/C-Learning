#include <iostream>
#include <cmath>

//https://cplusplus.com/reference/cmath/

int main()
{
    double x = 3;
    double y = 4;
    double z;

    //z = std::max(x,y); //4
    //z = std::min(x,y); //3
    //z = pow(2,3); //8
    //z = sqrt(9); //3
    //z  = abs(-3); //3
    //z = round(x); //3 when x = 3.14;
    //z = ceil(x); //4 when x = 3.14;
    z = floor(x); //3 whwn x = 3.99;

    std::cout << z;

    return 0;
}