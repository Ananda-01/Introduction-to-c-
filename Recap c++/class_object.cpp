#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int age;
    int roll;
    char nm[];

    // constructor
    Student(int a,int r,char*n)
    {
        age=a;
        roll=r;
        strcpy(nm,n);
    }
};

int main()
{
    Student ananda(21,32,"Das");
    cout<<ananda.age;
    return 0;
}