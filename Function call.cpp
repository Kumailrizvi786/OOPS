#include<iostream>
using namespace std;
class function_call
{
	public: void fun1()
	{
		cout<<"Im in fun1 \n";
		fun2();
		cout<<"Im back in fun1 \n";
	}
	fun2()
	{
		cout<<"Im in fun2 \n";
	}
};
int main()
{
	function_call obj;
	cout<<"Im in main \n";
	obj.fun1();
	cout<<"Im back in main \n";
	return 0;
}
