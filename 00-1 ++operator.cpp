#include <iostream>
using namespace std;

class Incrementer {
private:
    int value;

public:
    Incrementer(int val = 0) : value(val) {}
    Incrementer operator++() {
        value++;
        return *this;
    }

    friend Incrementer operator++(Incrementer &inc, int) {
        Incrementer temp = inc;
        inc.value++;
        return temp;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    Incrementer obj(5);

    cout << "Original Value: " << obj.getValue() << endl;
    ++obj;
    cout << "After Prefix Increment: " << obj.getValue() << endl;
    obj++;
    cout << "After Postfix Increment: " << obj.getValue() << endl;

    return 0;
}

