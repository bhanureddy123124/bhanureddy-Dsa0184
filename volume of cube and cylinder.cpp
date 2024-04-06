#include<iostream>
using namespace std;
class volume
{
	public:
		int side;
		double radius;
		double height;
		volume()
		{
			cin>>side;
			cin>>radius;
			cin>>height;
		}
	~volume()
	{
		cout<<"object is destroyed";
	}
	void volumedetails()
	{
		cout<<"volume of cube is"<<side*side*side<<endl;
		cout<<"volume of cylinder is"<<3.14*radius*radius*height<<endl;
	}
};
int main()
{
	volume v;
	v.volumedetails();
}
