#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        const int j;
        const int k;

        Demo(int a, int b, int c) : j(b), k(c)   //Parameterised constructor
        {
            i = a;
            //j = b;        //Na
            //k = c;        //NA
        }
};

int main()
{
    Demo obj(11,21,52);
    cout<<"Value of i : "<<obj.i<<"\n";
    cout<<"Value of j : "<<obj.j<<"\n";
    cout<<"Value of k : "<<obj.k<<"\n";

    obj.i++ ;
    //obj.j++ ;     //NA
    //obj.k++ ;     //NA

    return 0;
}