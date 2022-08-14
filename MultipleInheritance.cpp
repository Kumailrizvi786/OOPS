#include<iostream>
using namespace std;
class A
{
 public : int a=10;
 void showA()
 	{
 		cout<<"Im in class A and the value is "<<a<<"\n";
	}   
};
class B 
{
	public: int b=20;
	void showB()
	{
		cout<<"I'm in class B and the value is "<< b<<"\n";
	}
};
class C:public A, public B
{
public:	int c=30;
	void showC()
	{
		cout<<"I'm in class C and the value is "<< c<<"\n";	
	}
};
int main()
{
	C obj;
	obj.showA();
	obj.showB();
	obj.showC();
}
