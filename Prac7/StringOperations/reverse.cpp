#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
string str="Hello World!, Its going to reverse";
reverse(str.begin(), str.end());
cout<<str<<endl;
string s1="abcde";  //ASCII value of M:77
string s2="abcdf";  //ASCII value of K:75
if(s1>s2)
{
cout<<s1<<" comes before "<<s2<<endl;
}
else
{
cout<<s2<<" comes before "<<s1<<endl;
}
 
string str2="This is String reversing Example 2"; 
int i;
cout<<"Printing string in reverse\n";
for(i = str2.length() - 1; i >= 0; i--)
{
    cout<<str2[i];
}

/*int result = s1.compare(s2);
if (result == 0)
{
    cout<<"Both the input string are equal."<<endl;
}else if (result < 0)
{
    cout<<"String 1 is smaller than string 2"<<endl;
}
else
{
    cout<<"String 1 is greater than string2."<<endl;
}*/

return 0;
}

/*Comparing the length of two strings:
s1.length() <use any comparison operator> s2.length()
*/
/*ASCII values of A-Z is between 65 - 90 and
ASCII values of a-z is between 97-122*/
/*
HELLO - 
hello - 
*/