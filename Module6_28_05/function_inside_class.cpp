#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    int marks1;
    int marks2;
    Person(string nm,int ag,int m1,int m2) // constructor
    {
        name=nm;
        age=ag;
        marks1=m1;
        marks2=m2;
    }
    void hello()  // create function
    {
        cout<<name<<" "<<age<<endl;
    }
    int total_marks()
    {
        return marks1+marks2;
    }

};
int main()
{
    Person anand("Ananda das",21,98,79);  // object
    // cout<<anand.name<<" "<<anand.age<<endl;
    // anand.hello();  // function call normal way
    cout<<anand.total_marks()<<endl;
    return 0;
}