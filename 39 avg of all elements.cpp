#include <iostream>
using namespace std;

int main() {
    int size;
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

    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    double average = sum / size;

    cout << "The average of the elements is: " << average << endl;

    return 0;
}

