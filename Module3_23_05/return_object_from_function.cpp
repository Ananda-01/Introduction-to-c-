#include<bits/stdc++.h>
using namespace std;
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
// reuturn object from function
   Student fun()
   {
    char name[100]="Ananda";
    Student a(29,'A',8,name);
    return a; 
   }
int main()
{
    Student a=fun();
    
    cout<<a.cls<<endl;
    cout<<a.name<<endl;
    cout<<a.roll<<endl;
    return 0;
}