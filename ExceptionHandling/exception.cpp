#include<iostream>
using namespace std;

int main()
{
float percent;
cout<<"Enter your percentage: ";
cin>>percent;
    try
    {
    if(percent<0 || percent>100)
    throw(percent);
    else
    cout<<endl<<"Your percentage: "<<percent;
    }
    catch(float p)
    {
    cout<<endl<<"Invalid percentage: "<<p;
    }
return 0;
}
/*
int main()
{
float salary;
cout<<"Enter your Salary: ";
cin>>salary;
    try
    {
    if(salary<0)
    throw(salary);
    else
    cout<<"Your Salary is: "<<salary<<endl;
    }
    catch(float s)
    {
    cout<<"Salary can't be negative: "<<s;
    }
return 0;
}*/