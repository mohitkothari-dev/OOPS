#include <iostream>
#include <conio.h>
using namespace std;

class Student               //Parent class
{
    int rollno;
    char name[20];
    public:
    void getData()
    {
        cout<<"Enter rollno:"<<endl;
        cin>>rollno;
        cout<<"Enter name:"<<endl;
        cin>>name;
    }
    void showData()
    {
        cout<<"rollno:"<<rollno<<endl;
        cout<<"name:"<<name<<endl;
    }
};
class divA : public Student     //Child class
{
    string time;
    public:
    void enterTime()
    {
        cout<<"Enter time for lecture:"<<endl;
        cin>>time;
    }
    void showTime()
    {
        cout<<"Lecture is at:"<<time<<endl;
    }
};
class divB : public Student     //child class  
{
    string time;
    public:
    void enterTime()
    {
        cout<<"Enter time for lecture:"<<endl;
        cin>>time;
    }
    void showTime()
    {
        cout<<"Lecture is at:"<<time<<endl;
    }
};
int main()
{
    int option;
    cout<<"Enter the Division:"<<"\t";
    cout<<"1. Div A"<<"\t";
    cout<<"2. Div B"<<endl;
    cin>>option;
    if(option == 1)
    {
        divA da;        //object of child class DivA.
        da.getData();
        da.showData();
        da.enterTime();
        da.showTime();
    }
    else if (option == 2)
    {
        divB db;        //object of child class DivB
        db.getData();
        db.showData();
        db.enterTime();
        db.showTime();
    }
    else
    {
        cout<<"Invalid Input"<<endl;
    }
    return 0;
}