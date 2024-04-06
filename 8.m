#include <iostream>
#include <string>

class Employee {
protected:
    std::string Emp_name;
    int Emp_id;
    std::string Address;
    std::string Mail_id;
    long long Mobile_no;

public:
    // Constructor for Employee class
    Employee(std::string name, int id, std::string address, std::string mail, long long mobile)
        : Emp_name(name), Emp_id(id), Address(address), Mail_id(mail), Mobile_no(mobile) {}

    // Function to calculate gross salary
    virtual float calculateGrossSalary(float BasicPay) {
        float DA = 0.97 * BasicPay;
        float HRA = 0.10 * BasicPay;
        float PF = 0.12 * BasicPay;
        float staffFund = 0.001 * BasicPay;
        float grossSalary = BasicPay + DA + HRA + staffFund;
        return grossSalary;
    }

    // Function to calculate net salary
    virtual float calculateNetSalary(float BasicPay) {
        float DA = 0.97 * BasicPay;
        float HRA = 0.10 * BasicPay;
        float PF = 0.12 * BasicPay;
        float staffFund = 0.001 * BasicPay;
        float deductions = DA + HRA + PF + staffFund;
        float netSalary = BasicPay - deductions;
        return netSalary;
    }

    // Function to generate pay slip
    void generatePaySlip(float BasicPay) {
        float grossSalary = calculateGrossSalary(BasicPay);
        float netSalary = calculateNetSalary(BasicPay);

        std::cout << "Employee ID: " << Emp_id << std::endl;
        std::cout << "Employee Name: " << Emp_name << std::endl;
        std::cout << "Address: " << Address << std::endl;
        std::cout << "Mail ID: " << Mail_id << std::endl;
        std::cout << "Mobile No: " << Mobile_no << std::endl;
        std::cout << "-----------------------------------" << std::endl;
        std::cout << "Basic Pay: " << BasicPay << std::endl;
        std::cout << "DA: " << 0.97 * BasicPay << std::endl;
        std::cout << "HRA: " << 0.10 * BasicPay << std::endl;
        std::cout << "PF: " << 0.12 * BasicPay << std::endl;
        std::cout << "Staff Club Fund: " << 0.001 * BasicPay << std::endl;
        std::cout << "-----------------------------------" << std::endl;
        std::cout << "Gross Salary: " << grossSalary << std::endl;
        std::cout << "Deductions: " << 0.97 * BasicPay + 0.10 * BasicPay + 0.12 * BasicPay + 0.001 * BasicPay << std::endl;
        std::cout << "Net Salary: " << netSalary << std::endl;
        std::cout << "-----------------------------------" << std::endl;
    }
};

class Programmer : public Employee {
private:
    float BasicPay;

public:
    // Constructor for Programmer class
    Programmer(std::string name, int id, std::string address, std::string mail, long long mobile, float bp)
        : Employee(name, id, address, mail, mobile), BasicPay(bp) {}

    // Function to override calculateGrossSalary
    float calculateGrossSalary(float BasicPay) override {
        float DA = 0.97 * BasicPay;
        float HRA = 0.10 * BasicPay;
        float PF = 0.12 * BasicPay;
        float staffFund = 0.001 * BasicPay;
        float grossSalary = BasicPay + DA + HRA + staffFund;
        return grossSalary;
    }

    // Function to override calculateNetSalary
    float calculateNetSalary(float BasicPay) override {
        float DA = 0.97 * BasicPay;
        float HRA = 0.10 * BasicPay;
        float PF = 0.12 * BasicPay;
        float staffFund = 0.001 * BasicPay;
        float deductions = DA + HRA + PF + staffFund;
        float netSalary = BasicPay - deductions;
        return netSalary;
    }

    // Function to generate pay slip for Programmer
    void generatePaySlip() {
        std::cout << "-----------------------------------" << std::endl;
        std::cout << "Programmer Pay Slip" << std::endl;
        std::cout << "-----------------------------------" << std::endl;
        Employee::generatePaySlip(BasicPay);
    }
};

class AssistantProfessor : public Employee {
private:
    float BasicPay;

public:
    // Constructor for AssistantProfessor class
    AssistantProfessor(std::string name, int id, std::string address, std::string mail, long long mobile, float bp)
        : Employee(name, id, address, mail, mobile), BasicPay(bp) {}

    // Function to override calculateGrossSalary
    float calculateGrossSalary(float BasicPay) override {
        float DA = 0.97 * BasicPay;
        float HRA = 0.10 * BasicPay;
        float PF = 0.12 * BasicPay;
        float staffFund = 0.001 * BasicPay;
        float grossSalary = BasicPay + DA + HRA + staffFund;
        return grossSalary;
    }

    // Function to override calculateNetSalary
    float calculateNetSalary(float BasicPay) override {
        float DA = 0.97 * BasicPay;
        float HRA = 0.10 * BasicPay;
        float PF = 0.12 * BasicPay;
        float staffFund = 0.001 * BasicPay;
        float deductions = DA + HRA + PF + staffFund;
        float netSalary = BasicPay - deductions;
        return netSalary;
    }

    // Function to generate pay slip for AssistantProfessor
    void generatePaySlip() {
        std::cout << "-----------------------------------" << std::endl;
        std::cout << "Assistant Professor Pay Slip" << std::endl;
        std::cout << "-----------------------------------" << std::endl;
        Employee::generatePaySlip(BasicPay);
    }
};

class AssociateProfessor : public Employee {
private:
    float BasicPay;

public:
    // Constructor for AssociateProfessor class
    AssociateProfessor(std::string name, int id, std::string address, std::string mail, long long mobile, float bp)
        : Employee(name, id, address, mail, mobile), BasicPay(bp) {}

    // Function to override calculateGrossSalary
    float calculateG

