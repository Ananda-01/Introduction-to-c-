#include<bits/stdc++.h>
using namespace std;
class Player
{
    public:
    char name[100];
    int age;
    int run;
    float strike;
};
int main()
{
    // 1 player
    Player virat;
    virat.age=31;
    virat.run=25763;
    virat.strike=145.78;
    char b[100]="Virat Kohli";
    strcpy(virat.name,b);

    // another player
    Player dhoni;
    dhoni.age=42;
    dhoni.run=31829;
    dhoni.strike=186.92;
    char c[100]="Mohendra Singh Dhoni";
    strcpy(dhoni.name,c);

    cout<<virat.run<<endl;
    cout<<virat.name<<endl;
    cout<<dhoni.name<<endl;
    cout<<dhoni.run<<endl;
    return 0;
}