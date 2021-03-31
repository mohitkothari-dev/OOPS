#include <iostream>
#include <conio.h>
using namespace std;

class unaryPlus
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
  cout<<"a:"<<a<<"\n";
  }
  void operator +()
  {
  a++;
  }
};

int main()		//entry point of the program
{
unaryPlus up1; //object
up1.getData();
cout<<"Entered Data:"<<"\n";
up1.show();
+up1;
cout<<"After Overloading:"<<"\n";
up1.show();
return 0;
}