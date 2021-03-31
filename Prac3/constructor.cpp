/*Constructor is a special member function with the same name as class name.
It is used to initialize(assign value) the objects of its own class. 
It is automatically called whenever an object is created. */
//Complex number = real number + imaginary number. complex number = a + ib
//Without calling member functions we can Initialize private data members. Because, private data members can only be initialized using public member functions.
//They don't have any return type.
//should be declared in Public area.
#include <iostream>

using namespace std;
class Complex
{
    float a,b;
    public:
    //we are not declaring geData(), Becuase we're initializing a&b values using constructors.
    Complex() //It is also a function //Use-defined Default Constructor
    {
        a=0;
        b=0;
    }
    Complex(int x, int y) //Parameterised Constructor
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
    Complex sum(Complex newobj1)   
    {
        Complex newobj3;
        newobj3.a=a+newobj1.a;
        newobj3.b=b+newobj1.b;
        return newobj3;
    }
};
int main()
{
    Complex cp1(3,4); //Creating an Object of class Complex and Complex() is automatically getting called. Assigning values to parameterised constructor
    Complex cp2(4,5);
    Complex cp3; //Third object of complex class

    cp3=cp1.sum(cp2);
    cout<<"Complex Number 1:"<<endl;
    cp1.showData();
    cout<<"Complex Number 2:"<<endl;
    cp2.showData();
    cout<<"Complex Number After Addition:"<<endl;
    cp3.showData();
    return 0;
}