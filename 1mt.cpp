#include <iostream>
#include <string>

class NumberReverser {
private:
    int num;

public:
    // Constructor overloading
    NumberReverser() {
        num = 0;
    }

    NumberReverser(int n) {
        num = n;
    }

    NumberReverser(double d) {
        num = static_cast<int>(d);
    }

    int reverse() {
        int reversed = 0;
        int remainder;

        while (num != 0) {
            remainder = num % 10;
            reversed = reversed * 10 + remainder;
            num /= 10;
        }

        return reversed;
    }
};

int main() {
    NumberReverser num1(98557);
    NumberReverser num2(458738);
    NumberReverser num3;

    std::cout << "Reversed num1: " << num1.reverse() << std::endl;
    std::cout << "Reversed num2: " << num2.reverse() << std::endl;

    std::cout << "Reversed num3: " << num3.reverse() << std::endl;

    return 0;
}

