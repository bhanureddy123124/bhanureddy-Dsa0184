 #include <iostream>
using namespace std;
class largest {
private:
    int a, b;
public:
    void setdata(int x, int y) {
        a = x;
        b = y;
    }
    friend void find_Max(largest obj);
};
void find_Max(largest obj) {
    int max = (obj.a > obj.b) ? obj.a : obj.b;
    cout << "The largest number is: " << max << endl;
}
int main() {
    largest obj;
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    obj.setdata(x, y);
    find_Max(obj);
    return 0;
}
