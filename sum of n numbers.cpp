#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int sum = 0;
    int num;
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; ++i) 
	{
        cin >> num;
        sum += num;
    }
    cout << "The sum of " << n << " natural numbers is: " << sum << endl;
    return 0;
}
