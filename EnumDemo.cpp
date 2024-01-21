#include<iostream>
using namespace std;

int main()
{
    enum days {Sunday, Monday, Tuesday, Wednesday};

    cout<<Sunday<<"\n";
    cout<<Monday<<"\n";

    enum Months {January = 10, Febrary = 20, March};

    cout<<January<<"\n";
    cout<<Febrary<<"\n";
    cout<<March<<"\n";
    

    return 0;
}