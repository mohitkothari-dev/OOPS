#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
char s[10];
cout<<"Enter the String: ";
cin>>setw(2)>>s;   //Note: Do not add space while entering the character 
cout<<endl<<s;
return 0;
}