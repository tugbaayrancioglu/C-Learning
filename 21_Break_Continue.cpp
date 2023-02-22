#include <iostream>

int main()
{
    for(int i = 1; i <= 20; i++)
    {
        if(i==7)
        {
            continue; //skip 7
        }
        if(i==13)
        {
            break; //stop 13
        }
        std::cout << i << '\n';
    }

    return 0;
}