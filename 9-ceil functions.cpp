#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float num;
    
    cout << "Enter a floating-point number: ";
    cin >> num;
    
    int roundedFloor = floor(num); 
    int roundedCeil = ceil(num);   
    
    cout << "Original number: " << num << endl;
    cout << "Rounded down (using floor): " << roundedFloor << endl;
    cout << "Rounded up (using ceil): " << roundedCeil << endl;
    
    return 0;
}
