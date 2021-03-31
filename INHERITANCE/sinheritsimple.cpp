#include <iostream>
#include <conio.h>
using namespace std;

class Base      //Parent/Base/Super Class
{
public:
void f1()
{
    cout<<"This is Parent Class."<<endl;
}
};
class Derived : private Base     //Child/Derived/Sub Class
{
public:
void f2()
{
    f1();
    cout<<"This is Child Class."<<endl;
}
};
int main()      //entry point of the program
{
    Derived d1;     //Object of derived class
    d1.f2();
    return 0;
}