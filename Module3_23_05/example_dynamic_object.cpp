#include<bits/stdc++.h>
using namespace std;
class Doctor
{
    public:
    char name[100];
    int age;
    int room;
    char grade;
    // using costructor
    Doctor(int ag,int r,char gd,char*n)
    {
       age=ag;
       room=r;
       grade=gd;
       strcpy(name,n);
    }
};
int main()
{
    // static object
    // Doctor singh(43,8032,'A',"Dr Monomohan Singh");
    // cout<<singh.name<<endl;
    // cout<<singh.room<<endl;

    // dynamic object
    Doctor*singh=new Doctor(43,8032,'A',"Dr Monomohan Singh");
    (*singh).age=47;  // value change by dereference method
    delete singh;  // delete object from memory
    cout<<singh->name<<endl;
    cout<<singh->age<<endl;
    return 0;
}