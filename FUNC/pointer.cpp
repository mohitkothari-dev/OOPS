//Variable that contains the address of other variable in Pointer variable. It contains the address of the variable declared with same datatype as pointer. Means, an Integer pointer can store address of integer variable.
//When we declare a variable the compiler allocates some amount of memory to that varaible. How much memory it allocates depend upon the datatype and the compiler. Modern day compilers allocated 4bytes of memory to INTEGER varaible.
/*
    7 --------      int a;
    6 --------      a=5;
    5 --------
    4 --------
        p=1
    3 --------
    2 --------
        5
    1 --------

    Let us say we've a block of 4bytes at address 1 that stores an INTEGER variable a, now, we can have another variable which is pointer to integer and the name is p. Now variable p can store the address of a.  
*/ 
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a;
    int *p;     //Declaring pointer variable //pointer variable that points to an integer
    p = &a;     //to store the address of the variable we put '&' sign
    a=6;
    char ch;
    cout<<p<<endl;      //return the memory location of a
    cout<<&a<<endl;
    cout<<&p<<endl;     //return memory location of pointer variable
    cout<<*p<<endl;           //returns the value at the location that it points to
    cout<<sizeof(a)<<endl;
    cin>>ch;
    cout<<int(ch);
    return 0;
}