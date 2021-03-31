//In this program we'll pass properties of both the Student and Marks class to Percentage Class.
//Note: Protected is similar to private,but,protected datamembers are accesible through immediate derived/child class.
//Note: Data members derived under private visibility mode are never ready for further Inheritance.
#include <iostream>
#include <conio.h>
using namespace std;

class Student           //Parent Class
{
    private:
    int rollno;
    string name;
    public:
    void getStudent()
    {
        cout<<"Enter Student's rollno:"<<endl;
        cin>>rollno;
        cout<<"Enter Student's name:"<<endl;
        cin>>name;
    }
    void showStudent()
    {
        cout<<"Roll no:"<<rollno<<endl;
        cout<<"Name:"<<name<<endl;
    }
};
class Marks             //parent class
{
    protected:
    int m1,m2,m3;
    public:
    void getMarks()
    {
        cout<<"Enter Subject 1 marks:"<<endl;
        cin>>m1;
        cout<<"Enter Subject 2 marks:"<<endl;
        cin>>m2;
        cout<<"Enter Subject 3 marks:"<<endl;
        cin>>m3;
    }
    void showMarks()
    {
        cout<<"Marks for Subject 1:"<<m1<<endl;
        cout<<"Marks for Subject 2:"<<m2<<endl;
        cout<<"Marks for Subject 3:"<<m3<<endl;
    }
};
class Percentage : public Student, public Marks             //Child Class
{
    float percent;
    public:
    void showPercentage()
    {
        percent = (m1+m2+m3)/300.0;
        percent = percent*100;
        cout<<"Percentage of Student:"<<percent<<endl; 
    }
};
int main()
{
    Percentage p1;  //object of child class
    p1.getStudent();
    p1.showStudent();
    p1.getMarks();
    p1.showMarks();
    p1.showPercentage();
    return 0;
}