#include<iostream>
using namespace std;
int main()
{
	int marks[4],total=0,aggregade;
	cout<<"enter the marks of the student";
	for(int i=0;i<4;i++)
	{
		cin>>marks[i];
		total+=marks[i];
	}
	aggregade=total/4.0;
	cout<<total<<endl;
	cout<<aggregade<<endl;
	if(aggregade>=75)
	{
		cout<<"distinction";
	}
	else if(aggregade>=60)
	{
		cout<<"first division";
	}
	else if(aggregade>=50)
	{
		cout<<"second division";
	}
	else
	{
		cout<<"fail";
	}
	return 0;
}
