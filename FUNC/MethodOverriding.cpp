//Suppose, the same function is defined in both the derived class and the based class. Now if we call this function using the object of the derived class, the function of the derived class is executed. Method/Function overriding is used to assign new DEFINITION to an existing function.
#include <iostream>
#include <conio.h>
using namespace std;

/*class Base              //Parent class
{
public:
void f1()
{
    cout<<"This is Parent Class."<<endl;
}
};
class Derived : public Base     //Child Class
{
public:
void f1()
{
    cout<<"This is Child Class."<<endl;
}
};
int main()
{
    Derived d1;     //object of child class
    d1.f1();
    return 0;
}
*/

class Base          //Parent Class
{
    int x;
public:
void getData()
{
    cout<<"Enter the value of x:"<<endl;
    cin>>x;
}
void showData()
{
    cout<<"The value of x is:"<<x<<endl;
}
};
class Derived : public Base     //Child class
{
    int y;
public:
void getData()
{
    cout<<"Enter the value of y:"<<endl;
    cin>>y;
}
void showData()
{
    cout<<"The value of y is:"<<y<<endl;
}
};
int main()
{
    Derived d1;     //object of child class
    d1.getData();
    d1.showData();
    return 0;
}