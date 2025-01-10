#include<bits/stdc++.h>
using namespace std;
class Teacher
{
    public:
    char name[100];
    int age;
    int room;
    // using constructor
    Teacher(int ag,int r,char *n)
    {
       age=ag;
       room=r;
       strcpy(name,n);
    }
};
// return object from function
Teacher alpha()
{
    Teacher anil(71,302,"Anil Kumar Dor");
    return anil;
}
int main()
{
    Teacher anil=alpha();  // function call

    cout<<anil.name<<endl;
    cout<<anil.age<<endl;
    return 0;
}