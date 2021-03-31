#include <iostream>
using namespace std;

class geometry
{
    int l,b,h;
    public:
    int area(int x)
    {
        l=b=x;
        return (l*l); //side^2
    }
    int area(int x, int y) //Method Overloading
    {
        l=x;
        b=y;
        return(l*b);
    }
    int volume(int x, int y, int z)
    {
        l=x;
        b=y;
        h=z;
        return (l*b*h); //Volume of cuboid is length*breadth*height
    }
};
int main()
{
    geometry g; //object of class geometry
    cout<<"Area of Sqaure: "<<g.area(5)<<endl;
    cout<<"Area of Rectangle: "<<g.area(6,8)<<endl;
    cout<<"Volume of Cube: "<<g.volume(7,8,9)<<endl;
    return 0;
}