#include <iostream>
#include <conio.h>
using namespace std;

class Employee      //Base class, super class, parent class.
{
            //private data members.
    int id;
    char name[50];
    public:             //public members.
    void getData()      //will access the private data here.
    {
        cout<<"Enter Employee id:"<<endl;
        cin>>id;
        cout<<"Enter Employee name:"<<endl;
        cin>>name;
    }
    void showData()
    {
        cout<<"ID:"<<id<<"\n";
        cout<<"name:"<<name<<"\n";
    }
};
class Salary : public Employee      //Derived class, Sub class, Child class.
{
    int salary;
    public:
    void getSalary()
    {
        cout<<"Enter Salary:"<<endl;
        cin>>salary;
    }
    void showSalary()
    {
        cout<<"Entered Salary is:"<<salary;
    }
};
int main()
{
    Salary s1;          //Object of derived/child class.
    s1.getData();
    s1.getSalary();
    s1.showData();
    s1.showSalary();
    return 0;
}