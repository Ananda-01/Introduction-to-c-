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
};
int main()
{
    // object 
    Student a;
    a.roll=34;
    a.cls=9;
    a.section='A';
    char nm1[100]="Ananda";
    strcpy(a.name,nm1);

    Student b;
    b.roll=67;
    b.cls=9;
    b.section='B';
    char nm2[100]="Anand";
    strcpy(a.name,nm2);     // copy korar built in function
    
    cout<<b.roll<<"\n";
    cout<<a.cls;
    return 0;
}