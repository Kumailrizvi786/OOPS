#include<iostream>
using namespace std;
class base
{
public: base()
    {
        cout<<"Base class Constructor\n ";
    }
     ~base()
    {
        cout<<"Base class destructor \n";
    }
};
class derived :public base 
{
    public:
        derived()
        {
            cout<<"derived class constructor\n";
        }
        ~derived()
        {
            cout<<"derived class destructor \n";
        }
};
int main()
{
    derived obj;
    system("cls");
    return 0;
}