#include <iostream>

class Largest {
private:
    int a, b;
    int m;

public:
   
    void setData(int first, int second) {
        a = first;
        b = second;
    }

    friend void findMax(Largest obj);
};

void findMax(Largest obj) {
    if (obj.a > obj.b) {
        std::cout << "Maximum no is " << obj.a << std::endl;
    } else {
        std::cout << "Maximum no is " << obj.b << std::endl;
    }
}

int main() {
    int firstNo, secondNo;

    std::cout << "Enter the first no: ";
    std::cin >> firstNo;
    std::cout << "Enter the second no: ";
    std::cin >> secondNo;

    Largest obj;

    obj.setData(firstNo, secondNo);

    findMax(obj);

    return 0;
}

