#include <iostream>
using namespace std;

int main() {
    int size1, size2;
    cout << "Enter the size of the first array: ";
    cin >> size1;

    if (size1 <= 0) {
        cout << "Invalid size entered for first array." << endl;
        return 1; 
    }

    int arr1[size1];

    cout << "Enter elements of the first array:" << endl;
    for (int i = 0; i < size1; ++i) {
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> size2;

    if (size2 <= 0) {
        cout << "Invalid size entered for second array." << endl;
        return 1; 
    }

    int arr2[size2];

    cout << "Enter elements of the second array:" << endl;
    for (int i = 0; i < size2; ++i) {
        cin >> arr2[i];
    }

    int mergedSize = size1 + size2;
    int mergedArr[mergedSize];

    for (int i = 0; i < size1; ++i) {
        mergedArr[i] = arr1[i];
    }

    for (int i = 0; i < size2; ++i) {
        mergedArr[size1 + i] = arr2[i];
    }

    cout << "Merged array:" << endl;
    for (int i = 0; i < mergedSize; ++i) {
        cout << mergedArr[i] << " ";
    }
    cout << endl;

    return 0;
}

