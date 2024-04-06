#include <iostream>
using namespace std;
class Car 
{
private:
    int id;
    string name;
    int marks;
    static int count;
public:
    Car(int id, string name, int marks) {
        this->id = id;
        this->name = name;
        this->marks = marks;
        count++;
    }
    void display() {
        cout << "Id of the Car: " << id << endl;
        cout << "Name of the Car: " << name << endl;
        cout << "Marks: " << marks << endl << endl;
    }
    static void displayCount() {
        cout << "No. of objects created in the class: " << count << endl;
    }
};
int Car::count = 0;
int main() {
    int id, marks;
    string name;
    Car car1(101, "Ferrari", 10);
    Car car2(205, "Mercedes", 9);
    car1.display();
    car2.display();
    Car::displayCount();
    return 0;
}
