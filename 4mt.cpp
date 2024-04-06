#include <iostream>
#include <string>

bool isValidName(std::string name) {

    if (name.length() < 3) {
        return false;
    }

    for(char c :name) {
        if (!isalpha(c) && c != ' ') {
            return false;
        }
    }

    return true;
}

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;

    if (isValidName(name)) {
        std::cout << "Valid name!" << std::endl;
    } else {
        std::cout << "Invalid name!" << std::endl;
    }

    return 0;
}
