#include <iostream>
using namespace std;

int main() {
    int size, position;
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

    cout << "Enter the position of the element to delete (1 to " << size << "): ";
    cin >> position;

    if (position < 1 || position > size) {
        cout << "Invalid position entered." << endl;
        return 1;
    }

    cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = position - 1; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    size--; 

    cout << "Array after deletion: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

