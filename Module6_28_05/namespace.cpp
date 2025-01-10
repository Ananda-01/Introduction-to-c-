#include<bits/stdc++.h>
using namespace std;
namespace Anand
{
    int age=24;
    void hello()
    {
        cout<<"Ananda namespaces\n";
    }
}
namespace Ratul
{
    int age2=21;
    void hello2()
    {
        cout<<"Ananda namespaces\n";
    }
}
using namespace Anand;
using namespace Ratul;
int main()
{
    cout<<age<<endl;
    cout<<age2<<endl;
    hello();
    // Ratul::hello2();
    return 0;
}