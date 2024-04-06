#include <iostream>

class MyClass {
private:
    int myValue;

public:
    MyClass(int value);
    void displayValue();
};

MyClass::MyClass(int value) : myValue(value) {}

void MyClass::displayValue() {
    std::cout << "Value: " << myValue << std::endl;
}

int main() {
    MyClass obj(42);
    obj.displayValue();
    return 0;
}
