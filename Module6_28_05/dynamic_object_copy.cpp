#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    Person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
};
int main()
{
    Person* anand=new Person("Ananda das",21);
    Person* ratul=new Person("Ratul khan",19);  
    // anand=ratul;  // it didnot work
    // 1st option
    // anand->name=ratul->name;
    // anand->age=ratul->age;
    // 2nd option
    *anand=*ratul;
    delete ratul;
    cout<<anand->name<<" "<<anand->age<<endl;
    return 0;
}