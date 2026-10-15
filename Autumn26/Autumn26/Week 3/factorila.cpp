//Factorial from x

#include <iostream>

int main()
{
    int x, result, n;
    
    std::cout << "Provide the number: ";
    std::cin >> x;

    result = x;
    n = x;

    for(int i = 0; i <= n-2; ++i)
    {
        result = result * (x-1);
        x = x-1;
    }

    std::cout << "Answer is " << result << std::endl;

}