#include <iostream>

using namespace std;

int main() {
    float num1, num2;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;
   
    float additionResult = num1 + num2;
    cout << "Addition result: " << additionResult << endl;
    
    float subtractionResult = num1 - num2;
    cout << "Subtraction result: " << subtractionResult << endl;
    
    float multiplicationResult = num1 * num2;
    cout << "Multiplication result: " << multiplicationResult << endl;
    
    if (num2 != 0) {
        float divisionResult = num1 / num2;
        cout << "Division result: " << divisionResult << endl;
    } else {
        cout << "Division by zero is undefined" << endl;
    }
    
    return 0;
}
 
