// What is the size that an object allocates to the memory?
/* The size of an object represents the amount of memory it occupies in the computer's memory.
The sizeof operator in C++ can be used to determine the size of an object or a data type at compile time. 
int - 4 byte, float - 8 byte,char - 1 byte. */


//Can you return a static object from a function? If yes, show with an example.
// Yes, it is possible to return a static object from a function in C++.
#include<bits/stdc++.h>
using namespace std;
class Player
{
   public:
   char name[100];
   int run;
   float strike_rate;
   Player(int r,float s,char *n)
   {
      run=r;
      strike_rate=s;
      strcpy(name,n);
   }
};
// reuturn object from function
   Player cricket()
   {
    char name[100]="Shakib";
    Player a(9088,130.5,name);
    return a; 
   }
int main()
{
    Player a=cricket();
    cout<<a.name<<endl;
    cout<<a.run<<endl;
    return 0;
}

// Why do we need -> (arrow sign)?

// Create two objects of the Person class from question 2-c and initialize them with proper value.
// Now compare whose age is greater, and print his/her name.
// #include<bits/stdc++.h>
// using namespace std;
// class Person
// {
//    public:
//    char name[100];
//    int age;
//    float height; 
//    Person(int a,float h,char *n)
//    {
//       age=a;
//       height=h;
//       strcpy(name,n);
//    }
// };
// int main()
// {
//     Person a(21,5.7,"Ananda");
//     Person b(19,5.9,"Ratul");
//     if(a.age>b.age)
//     {
//         cout<<a.name<<" is greater\n";
//     }
//     else
//     {
//         cout<<b.name<<" is greater\n";
//     }
//     return 0;
// } 