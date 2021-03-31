#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string course;
    cout<<"Enter name of your course:"<<endl;
    cin>>course;
    try{//you can add as many occurences as you want
        if(course=="BScIT" ||course=="BMM" || course=="BMS" || course=="bscit" || course=="BSCIT"){
            cout<<"You have Chosen "<<course<<" course."<<endl;
        }else{
            throw(course);
        }
    }catch(string c){
        cout<<"Sorry! UPG don't provide this course."<<endl;
    }
}