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
    Student a(35,'A',9,"Ananda");
    Student b(85,'A',8,"Anand");
    Student c(25,'C',8,"Ananta");
    
    cout<<a.roll<<endl;
    cout<<b.roll<<endl;
    cout<<b.section<<endl;
    cout<<a.cls<<endl;
    cout<<c.name<<endl;
    
    return 0;
}