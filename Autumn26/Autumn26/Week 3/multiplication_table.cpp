#include <iostream>

int main()
{
    int n;
    int result = 1;
    int res = 1;
    std::cout << "Provide value of n: " << std::endl;
    std::cin >> n;

    for (int row = 0; row < n; ++row)
    {
        result = 1 * (row + 1);
        std::cout << result << "\t";

        for (int col = 1; col < n; ++col)
        {
            res = result * (col + 1);
            std::cout << res << "\t";
        }

        std::cout << std::endl;
    }
}