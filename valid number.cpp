#include <iostream>
#include <string>
#include <regex>

bool isValidNumber(const std::string& s) {
    // Regular expression pattern to match a valid number
    std::regex pattern("^[-+]?[0-9]*\\.?[0-9]+([eE][-+]?[0-9]+)?$");
    

    return std::regex_match(s, pattern);
}

int main() {
    // Test cases
    std::string num1 = "123";      
    std::string num2 = "-123.45";  
    std::string num3 = "12.34e-5"; 
    std::string num4 = "abc";      
    std::string num5 = "12.34e";   
    
    // Check validity of numbers
    std::cout << num1 << " is " << (isValidNumber(num1) ? "valid" : "invalid") << std::endl;
    std::cout << num2 << " is " << (isValidNumber(num2) ? "valid" : "invalid") << std::endl;
    std::cout << num3 << " is " << (isValidNumber(num3) ? "valid" : "invalid") << std::endl;
    std::cout << num4 << " is " << (isValidNumber(num4) ? "valid" : "invalid") << std::endl;
    std::cout << num5 << " is " << (isValidNumber(num5) ? "valid" : "invalid") << std::endl;

    return 0;
}
