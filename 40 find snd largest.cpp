#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

   
    if (size <= 1) {
        cout << "Invalid size entered. Please enter a size greater than 1." << endl;
        return 1; 
    }

    int arr[size];

    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int secondLargest = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "The second largest element in the array is: " << secondLargest << endl;

    return 0;
}

