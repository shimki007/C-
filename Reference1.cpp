#include<iostream>
using namespace std;

int main()
{
    int no = 11;
    int &ref = no;      //Multiple reference and reference to reference is allowed
    int &x = ref;

    int *p = &no;
    int *(&q) = p;


    cout<<no<<"\n";
    cout<<ref<<"\n";
    cout<<x<<"\n";

    cout<<&no<<"\n";
    cout<<&ref<<"\n";

    cout<<*p<<"\n";
    cout<<*q<<"\n";

    return 0;
}