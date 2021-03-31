#include <iostream>
#include <conio.h>
using namespace std;

class op
{
int a;
public:
	void getData()
  {
  cout<<"Enter numbers:"<<"\n";
  cin>>a;
  }
  void show()
  {
  cout<<"a:"<<a;
  }
  void operator -()
  {
  a=-a;
  }
};

int main()		//entry point of the program
{
op op1; //object
op1.getData();
cout<<"Entered Data:"<<"\n";
op1.show();
-op1;
cout<<"After Overloading:"<<"\n";
op1.show();
return 0;
}