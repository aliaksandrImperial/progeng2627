#include <iostream>

int main()
{
    int x;
    int result = 0;
    std::cout << "Provide the value: ";
    std::cin >> x;

    if( x % 2 == 0)
    {
        result = x / 2;
    }
    else if ( x == 1)
    {
        result = 1;
    }
    else
    {
        result = 3*x + 1;
    }

    std::cout << result << std::endl;

    while(result != 1)
    {
        if( result % 2 == 0)
        {
            result = result / 2;
        }
        else
        {
            result = 3*result + 1;
        }
        std::cout << result << std::endl;
    }
}