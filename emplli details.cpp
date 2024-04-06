#include<iostream>
#include <string>
using namespace std;
class Employee {
public:
    string emp_name;
    int emp_id;
    string address;
    string mail_id;
    long long mobile_no;
    void getEmployeeDetails() 
	{
        cout << "Enter Name of the Employee: ";
        cin >> emp_name;
        cout << "Enter Address of the Employee: ";
        cin>>  address;
        cout << "Enter ID of the Employee: ";
        cin >> emp_id;
        cout << "Enter Mobile Number: ";
        cin >> mobile_no;
        cout << "Enter E-Mail ID of the Employee: ";
        cin >> mail_id;
    }
};
class Programmer : public Employee 
{
public:
    double basic_pay;
    double da;
    double hra;
    double pf;
    double club_fund;
    void getBasicPay() 
	{
        cout << "ENTER THE BASIC PAY OF THE PROGRAMMER => ";
        cin >> basic_pay;
    }
    void calculateSalary() 
	{
        da = 0.97 * basic_pay;
        hra = 0.1 * basic_pay;
        pf = 0.12 * basic_pay;
        club_fund = 0.001 * basic_pay;
        double gross_pay = basic_pay + da + hra;
        double net_pay = gross_pay - (pf + club_fund);
        cout << "=======================\n";
        cout << "PROGRAMMER PAYMENT SLIP\n";
        cout << "=======================\n";
        cout << "BASIC PAY => " << basic_pay << endl;
        cout << "DEARNESS ALLOWANCE => " << da << endl;
        cout << "HOUSE RENT ALLOWANCE => " << hra << endl;
        cout << "PROVIDENT FUND => " << pf << endl;
        cout << "CLUB FUND => " << club_fund << endl;
        cout << "GROSS PAY => " << gross_pay << endl;
        cout << "NET PAY => " << net_pay << endl;
    }
};
int main() {
    Programmer programmer;
    programmer.getEmployeeDetails();
    programmer.getBasicPay();
    programmer.calculateSalary();
    return 0;
}
