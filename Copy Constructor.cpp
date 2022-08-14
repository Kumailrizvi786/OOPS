#include<iostream>
using namespace std
class Fun 
{
    public:  int a,b;
    Fun(int x,int y)
    {
        a=x;
        b=y;
        cout<<a<<"\n"<<b;
    }
    Fun(const Fun obj)
    {
        a=obj.a;
        b=obj.b;
        cout<<a<<"\n"<<b;
    }
};
int main()
{
    Fun obj1(200,300);
    Fun obj2=obj1;
    return 0;
}