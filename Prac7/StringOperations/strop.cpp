#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class String
{
    char str[20];
    public:
    void getData()
    {
        cout<<"Enter a string:"<<endl;
        cin>>str;
        cout<<"Length of "<<str<<" is: "<<strlen(str)<<endl;
    }
    void showData()
    {
        cout<<"After Concatenation:"<<str<<endl;
        cout<<"Length of the string is: "<<strlen(str)<<endl;//strlen only accepts constant character datatypes.
    }
    String operator +(String X) //overloaded operator //parameterized constructor
    {
        String t;   //temporary object-instance of the class
        strcpy(t.str,str);  //Implicit argument is copied into t //Unclear //s1 value
        strcat(strcat(t.str," "),X.str);    //explicit argument is concatinated //Clear //s2 value
        return t;
    }
};
int main()      //entry point of the program.
{
    String s1,s2,s3;        //objects
    s1.getData();
    s2.getData();
    s3=s1+s2;
    s3.showData();
    return 0;
} 