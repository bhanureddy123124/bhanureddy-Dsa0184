#include <iostream>
class FloydTriangle 
{
public:
    FloydTriangle(int rows) 
	{
        int number = 1;
        for (int i = 1; i <= rows; ++i) 
		{
            for (int j = 1; j <= i; ++j) 
			{
                std::cout << number << " ";
                ++number;
            }
            std::cout << std::endl;
        }
    }
    ~FloydTriangle() {
        std::cout << "\nDestructor Called";
    }
};
int main() 
{
    int numRows;
    std::cout << "Enter the number of rows for Floyd's Triangle: ";
    std::cin >> numRows;
    FloydTriangle triangle(numRows);
    return 0;
}
