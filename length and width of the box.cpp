#include <iostream>
using namespace std;
class Box 
{
private:
    int width;
public:
    int length;
    void setWidth(int w) 
	{
        width = w;
    }
    int getWidth() 
	{
        return width;
    }
};
int main() 
{
    Box boxObj;
    cout << "Enter the Length of box: ";
    cin >> boxObj.length;
    cout << "Enter the Width of box: ";
    int width;
    cin >> width;
    boxObj.setWidth(width);
    cout << "Length of box: " << boxObj.length << endl;
    cout << "Width of box: " << boxObj.getWidth() << endl;
    return 0;
}
