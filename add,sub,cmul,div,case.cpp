
#include <iostream>
using namespace std;
int main() 
{
    int choice;
    int num1, num2, result;
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Modulus\n";
    cout << "Enter your choice: ";
    cin >> choice;
    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;
    switch (choice) 
	{
        case 1:
            result = num1 + num2;
            cout << "The value of addition is " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "The value of subtraction is " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "The value of multiplication is " << result << endl;
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                cout << "The value of division is " << result << endl;
            } else {
                cout << "Cannot divide by zero!" << endl;
            }
            break;
        case 5:
            result = num1 % num2;
            cout << "The value of modulus is " << result << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
    return 0;
}
