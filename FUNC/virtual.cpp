#include <iostream>
#include <conio.h>
using namespace std;

class Parent
{
    public:
    virtual void show()         //Virtual Function
    {
        cout<<"Parent class show function called"<<endl;
    }
    virtual void print()
    {
        cout<<"Parent class print function called"<<endl;
    }
};

class Child : public Parent
{
    public:
    void show()         //Overriding
    {
        cout<<"Child class show function called"<<endl;
    }
    void print()        //Overriding
    {
        cout<<"Child class print function called"<<endl;
    }
};

int main()
{
    Child cobj;         //object of child class/derived class.
    Parent *pointer_parent;     //pointer of parent class
    pointer_parent = &cobj;     //pointing it towards object of the child class object.Passing the address of object.
    pointer_parent->show();     //As you all can see we're calling both the parent class functions successfully.
    pointer_parent->print();    //During overriding we used to call Child class functions.It shows that even if we have overiden the functions we can still call parent class functions successfully.So, if we use virtual keyword before return type of the function, it'll point to the same function of the Child class.
    //When we use virtual keyword these functions are called dynamically at runtime.
    //Now, Dynamically means by the C++.
    return 0;
}