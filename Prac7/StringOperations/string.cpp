//String concatenation and String length
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str1 = "Hello";
    string str2 = "World!";
    cout<<"Length of String "<<str1<<" is:"<<str1.length()<<endl;
    cout<<"Length of String "<<str2<<" is:"<<str2.size()<<endl;
    string str3 = str1 +" "+ str2;
    cout<<"After Concatenation : "<<str3;
    return 0;
}