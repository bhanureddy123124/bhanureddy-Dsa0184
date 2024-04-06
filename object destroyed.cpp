#include<iostream>
#include<cmath>
using namespace std;
class area
{
	public:
		double radius;
		int length;
		int breadth;
		int base;
		int height;
		area()
		{
			cin>>radius;
			cin>>length;
			cin>>breadth;
			cin>>base;
			cin>>height;
		}
	~area()
	{
		cout<<"object is destroyed";
	}
	void areadetails()
	{
		cout<<3.14*radius*radius<<endl;
		cout<<length*breadth<<endl;
		cout<<0.5*base*height<<endl;
	}	
};
int main()
{
	area a;
	a.areadetails();
}
