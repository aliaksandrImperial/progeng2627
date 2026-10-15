#include <iostream>

int n;

int main()
{
    std::cout << "please enter the number" << std::endl;
    std::cin >> n;

    if (n % 3 == 0)
    {
        std::cout << "multiple of 3" << std::endl;
    }
    else
    {
        std::cout << "not multiple of 3" << std::endl;
    }
}