#include <iostream>
using namespace std;

int main() {
    int size, target;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid size entered." << endl;
        return 1;
    }

    int arr[size];

    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the value to find occurrences for: ";
    cin >> target;

    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            count++;
        }
    }

    cout << "The number of occurrences of " << target << " in the array is: " << count << endl;

    return 0;
}

