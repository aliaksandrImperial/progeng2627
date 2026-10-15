// x^n

#include <iostream>

int main()
{
    int x, n, result;
    std::cout << "Please enter value of x" << std::endl;
    std:: cin >> x;

    std::cout << "Please enter value of n" << std::endl;
    std:: cin >> n;

    result = x;

    for (int i = 0; i <= n-2; i++)
    {
        result = result * x;
    }

    std::cout << "Result:" << result << std::endl;
}