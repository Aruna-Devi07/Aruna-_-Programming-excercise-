#include <iostream>
#include <string>

int main() 
{
    char c;
    std::string vowels = "aeiouAEIOU";

    std::cout << "Enter Character: ";
    std::cin >> c;

    if (vowels.find(c) != std::string::npos) {
        std::cout << "Is A Vowel" << std::endl;
    } else {
        std::cout << "Is A Consonant" << std::endl;
    }

    return 0;
}
