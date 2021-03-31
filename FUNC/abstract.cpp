//A do nothing function is Pure Virtual Function. It is also called as Abstract Function.
//A class containing Pure Virtual Function is Abstract Class.
//We cannot make object of Abstract class.
//A pure virtual function is declared in a base class without any code/definition and redifined in derived class.
//A virtual need to be overriden.
#include <iostream>
#include <conio.h>
using namespace std;

class shape         //Abstract Base class
{
    protected:
    float d1,d2;
    public:
    void getDimension()
    {
        cout<<"Enter two dimensions:"<<endl;
        cin>>d1>>d2;
    }
    virtual float area()=0;     //pure virtual function
};
class triangle: public shape        //Derived Class   
{
    public:
    float area()
    {
        return 0.5 * d1 * d2;
    }
};
class rectangle: public shape       //Derived Class
{
    public:
    float area()
    {
        return d1 * d2;
    }
};

int main()
{
    //shape sobj; //will throw error here.
    triangle t;     //object of child class triangle
    t.getDimension();
    cout<<"Triangle area:"<<t.area()<<endl;
    rectangle r;    //object of child class rectangle 
    r.getDimension();
    cout<<"Rectangle area:"<<r.area()<<endl;
    return 0;
}
