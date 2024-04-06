#include <iostream>
class DecimalToBinary 
{
public:
    int decimalNumber;
    long long binaryNumber;
    DecimalToBinary(int num) : decimalNumber(num), binaryNumber(0) 
	{
        convertToBinary();
    }
    void convertToBinary() 
	{
        long long tempBinary = 0, multiplier = 1;
        while (decimalNumber > 0) 
		{
            tempBinary += (decimalNumber % 2) * multiplier;
            decimalNumber /= 2;
            multiplier *= 10;
        }
        binaryNumber = tempBinary;
    }
    void displayBinary() const 
	{
        std::cout << "Binary equivalent: " << binaryNumber << std::endl;
    }
};
int main() 
{
    int decimalNum;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimalNum;
    DecimalToBinary converter(decimalNum);
    converter.displayBinary();
    return 0;
}

