#include <iostream>

int main() {
    int age;
    
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18) {
        std::cout << "Congratulations! You are eligible to vote." << std::endl;
    } else {
        int yearsLeft = 18 - age;
        std::cout << "You are not eligible to vote yet." << std::endl;
        std::cout << "You need to wait " << yearsLeft;
        if (yearsLeft == 1) {
            std::cout << " year to be eligible." << std::endl;
        } else {
            std::cout << " years to be eligible." << std::endl;
        }
    }

    return 0;
}

