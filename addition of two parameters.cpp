#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}
int main() {
    int num1, num2, num3;
    cout << "Enter the value for a, b, c: ";
    cin >> num1 >> num2 >> num3;
    
    int sum_two = add(num1, num2);
    int sum_three = add(num1, num2, num3);
    cout << "The value of addition using two parameters is: " << sum_two << endl;
    cout << "The value of addition using three parameters is: " << sum_three << endl;
    return 0;
}
