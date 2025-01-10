// Explain Stack and Heap memory.

/* Stack memory is a limited type memory.It removes data after operation.It fulfil his memory totally.
We can not receive array by static memory.Because its delete array value.Due to static memory problem we 
face compile time error */

/* Heap memory is a daynamic memory by which we can manipulate data in many ways.We can increase or decrease size 
very easily. We receive array by dynamic way. */


// Why do we need dynamic memory allocation? Explain with examples.

/* We can save memory storage by dynamic allocation. Suppose we copy one array from another array. After copy then 
first array is still exist in memory which is unnecessary.But we can solve this dynamic memory allocation.It deletes 
unnecessary data. */


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int*a=new int[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    int b[5];
    for(int i=0;i<5;i++)
    {
        b[i]=a[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<b[i]<<" ";  // new array
    }
    cout<<endl;
    delete[] a;  // we delete an array using this syntax
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
} 

// How to create a dynamic array? What are the benefits of it?



