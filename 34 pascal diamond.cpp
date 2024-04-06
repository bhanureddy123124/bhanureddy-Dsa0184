#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows (should be odd): ";
    cin >> rows;

   
    for (int i = 1; i <= rows; i += 2) {
        for (int j = 1; j <= rows - i; j += 2) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = rows - 2; i >= 1; i -= 2) {
        for (int j = 1; j <= rows - i; j += 2) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

