#include<iostream>
using namespace std;
class A
{
public: int a=10;
    void show()
    {
        cout<<"Im in class A and the value is "<<a<<"\n"; 
    }
};
class B: public A
{
	public: int b=20;
    void showB()
    {
    	cout<<"Im in class B and the value is "<< b<< "\n";
	}
};
int main()
{
	cout<<"This program is showing Single Inheritance \n";
	B obj;
	obj.show();
	obj.showB();
	return 0;
}
