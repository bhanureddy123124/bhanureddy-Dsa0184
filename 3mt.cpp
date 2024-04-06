#include <iostream>

int main() {
    int var1;
    float var2;
    char var3;

    std::cout << "Address of var1: " << &var1 << std::endl;
    std::cout << "Address of var2: " << &var2 << std::endl;
    std::cout << "Address of var3: " << static_cast<void*>(&var3) << std::endl;

    return 0;
}

