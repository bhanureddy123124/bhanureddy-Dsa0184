#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    float arr[size] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float *ptr = arr; 

    cout << "Elements of the array using pointer:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": " << *(ptr + i) << endl;
    }

    return 0;
}

