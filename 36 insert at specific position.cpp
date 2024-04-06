#include <iostream>
using namespace std;

int main() {
    int size, pos, newValue;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size + 1]; 

    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the position where you want to insert the element: ";
    cin >> pos;

    if (pos < 0 || pos > size) {
        cout << "Invalid position!";
        return 0;
    }

    cout << "Enter the value to insert: ";
    cin >> newValue;

    for (int i = size; i > pos; --i) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = newValue;

    size++; 
    cout << "Array after insertion: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

