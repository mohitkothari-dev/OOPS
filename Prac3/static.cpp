//When a static variable is declared automatically it is initialized with value 0.
//We can access static data members directly with class name also, Without using object.
//It should be declared inside the class and defined outside the class.
//Use: To preserve the value, to append, counter
#include <iostream> 
#include <stdio.h>
#include <conio.h>
using namespace std;

class student
{
    int rollno;
    char name[30];
    float percent;
    static int c;
    public:
    void getData()
    {
        rollno = ++c;
        cout<<"Enter Name:"<<endl;
        cin>>name;
        cout<<"Enter Percent:"<<endl;
        cin>>percent;
    }
    void showData()
    {
        cout<<"Rollno: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Percent: "<<percent<<endl;
    }
    static void showCount()
    {
        cout<<"Total number of students admitted:"<<c<<endl;
    }
};

int student::c;

int main()
{
    student s1,s2;
    s1.getData();
    s2.getData();
    s1.showData();
    s2.showData();
    student::showCount();
    return 0;
}