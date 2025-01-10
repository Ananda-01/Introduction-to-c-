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
    // Student a(35,'A',9,name);

    // Dynamic object which is we can modify
    Student*a =new Student(35,'A',9,name);  // syntax
    
    
    return 0;
}