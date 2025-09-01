#include <iostream>

int main() 
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num % 15 == 0) {
        std::cout << "The number is divisible by both 5 and 15." << std::endl;
    } else if (num % 5 == 0) {
        std::cout << "The number is divisible by 5 but not 15." << std::endl;
    } else {
        std::cout << "The number is not divisible by either 5 or 15." << std::endl;
    }

    return 0;
}
