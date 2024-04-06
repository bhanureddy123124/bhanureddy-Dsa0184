#include <iostream>

float calculateInterestSenior(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}

float calculateInterestRegular(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}

int main() {
    float principal, rate, time;
    char customerType;

    std::cout << "Enter principal amount: ";
    std::cin >> principal;
    std::cout << "Enter time (in years): ";
    std::cin >> time;
    std::cout << "Are you a senior citizen? (Y/N): ";
    std::cin >> customerType;

    float interest;
    if (customerType == 'Y' || customerType == 'y') {
        rate = 12.0; 
        interest = calculateInterestSenior(principal, rate, time);
    } else {
        rate = 10.0; 
        interest = calculateInterestRegular(principal, rate, time);
    }

    std::cout << "Interest at " << rate << "% rate: " << interest << std::endl;

    return 0;
}

