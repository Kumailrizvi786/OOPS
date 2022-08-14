#include<iostream>
using namespace std;
class jkl
{
	public:
	int a,b,sum=0;
void accept()
{
	cout<<"Enter The first No. \n";
	cin>>a;
	cout<<"Enter The second No. \n";
	cin>>b;
}
	void add()
	{
		sum=a+b;
	}
	void display()
	{
		cout<<"The First Number is "<<a;cout<<"\n";
		cout<<"The Second Number is "<<b;cout<<"\n";
		cout<<"The Sum of the both numbers are "<<sum;cout<<"\n"; 
	}
}obj1,obj2;
int main()
{
	obj1.accept();
	obj1.add();
	obj1.display();
	
	obj2.accept();
	obj2.add();
	obj2.display();
	return 0;
}
