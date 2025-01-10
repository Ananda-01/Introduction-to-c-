// How does class and object work? How to declare an object?
/* Class is a user defined data type. On the other hand, object is a different properties of this data type.
Suppose integer a kind of datatype and under this datatype we can assign many value which all of them integer.
here integer is a Class and assign value a,b,c...z are class. */

// What is a constructor and why do we need this? How to create a constructor show with an example.

/* We can create object very fast using constructor.It saves our time.We can maipulate many data 
using constructor. */
//Create a class named Person where the class will have properties name(string), height(float) and age(int). Make a constructor and create a dynamic object of that class and finally pass proper values using the constructor.

#include<bits/stdc++.h>
using namespace std;
class Person
{
   public:
   char name[100];
   int age;
   float height; 
   Person(int a,float h,char *n)
   {
      age=a;
      height=h;
      strcpy(name,n);
   }
};
int main()
{
    Person a(21,5.7,"Ananda");
    Person b(19,5.9,"Ratul");
    
    cout<<a.age<<endl;
    cout<<a.name<<endl;
    cout<<b.name<<endl;
    cout<<b.height<<endl;
    return 0;
} 