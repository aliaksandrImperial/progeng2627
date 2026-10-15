#include <iostream>
//#include <string>

int main() {
    /*
    std::cout << "hello" << std::endl;
    // std::cout << std::endl;
    std::cout << "goodbye" << std::endl;
    */

    /*
    std::string user_name;
    std::cout << "What is your name?" << std::endl;
    std::cin >> user_name;
    std::cout << "Hello, " << user_name << std::endl;
    */

    /*
    std::string user_name;

    // TODO: add another declaration
    // for a text variable called user_surname

    std::string user_surname;

    std::cout << "what is your name?" << std::endl;
    std::cin >> user_name;

    // TODO: add another printing instruction 
    // asking for the surname
    std::cout << "What is your surname?" << std::endl;
    // TODO: read the surname from the user
    // and store it in variable user_surname
    std::cin >> user_surname;
    // TODO: add a printing instruction 
    // that says hello followed by the
    // name and surname of the user
    std::cout << "Hello, " << user_name << " " << user_surname << std::endl;
    */

    // 1.4 Numerical Variables, Expressions

    /*
    double n1, n2, multiple;

    std::cout << "please enter the first number" << std::endl;
    std::cin >> n1;
    std::cout << "please enter the second number" << std::endl;
    std::cin >> n2;

    multiple = n1 * n2;

    std::cout << n1 << " * " << n2 << " = " << multiple << std::endl;
    */
  
    /*
    double a, b, c;

    a = 1;
    b = 2;
    c = a + b;

    std::cout << c << std::endl;
    // this line will print 3

    a = 2;

    std::cout << c << std::endl;
    // TODO: before testing the program
    // write in a comment below
    // what you expect to be printed
    // Print, as a reasigned later than c is calculated

    c = a + b;

    std::cout << c << std::endl;
    // TODO: before testing the program
    // write in a comment below
    // what you expect to be printed
    // 4, a was reasigned to 2
    */

    int n, rem;

    std::cout << "please enter a number" << std::endl;

    std:: cin >> n;

    rem = n % 2;

    if(rem != 0)
    {
        std::cout << "The number is odd" << std::endl;
    }
    else
    {
        std::cout << "The number is even" << std::endl;
    }
}