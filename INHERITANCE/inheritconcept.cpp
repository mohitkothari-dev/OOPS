class Base          //Parent Class
{
    public:
        int a;
    protected:
        int b;
    private:
        int c;
};

class Derived1 : public Base        //Child class
{
    // a is public
    // b is protected
    // c is not participating in Inheritance as it is a private data member.
};

class Derived2 : protected Base     //Child Class 
{
    // a is protected
    // b is protected
    // c is not participating in Inheritance as it is a private data member.
};

class Derived3 : private Base       //Child Class
{
    // a is private
    // b is private
    // c is not participating in Inheritance as it is a private data member.
}
 