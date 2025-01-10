#include<bits/stdc++.h>
using namespace std;
// syntax of class
class Student
{
   public:
   char name[100];
   int roll;
   int cls;
   char section;
   // using constructor 
   Student(int r,int s,int c,char *n)
   {
      roll=r;
      section=s;
      cls=c;
      strcpy(name,n);
   }
};
int main()
{
    // object 
    char name[100]="Ananda";
    // Student a(35,'A',9,name);  // static object

    // Dynamic object which is we can modify
    Student*a =new Student(35,'A',9,name);  // syntax
    (*a).roll=79;  // roll update by dereference method

    // value acess normal way
    // int *b=new int;
    // *b=86;
    // cout<<*b<<endl;
    
    // value acess for dynamic array
    // cout<<(*a).name<<endl;
    // cout<<(*a).cls<<endl;
    // cout<<(*a).roll<<endl;

    // shortcut way
    // arrow sign
    // (*a).=a->  // its works if its dynamic object and pointer

    cout<<a->name<<endl;
    cout<<a->cls<<endl;
    cout<<a->roll<<endl;

    // delete an object
    // syntax
    delete a;  
    cout<<a->name<<endl;
    cout<<a->cls<<endl;
    cout<<a->roll<<endl;
    return 0;
}