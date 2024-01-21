#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;
        static int k;

        Demo(int a = 10, int b = 20)        // Parameterised Constructor with Default Arguments
        {
            i = a;
            j = b;
        }

        void Display()
        {
            cout<<"Inside non static method Display\n";
            cout<<"value of i : "<<i<<"\n";
            cout<<"value of j : "<<j<<"\n";
            cout<<"value of k : "<<k<<"\n";
        
        }       

        static void Fun()
        {
            cout<<"Inside static Method Fun\n";
            cout<<"value of k : "<<k<<"\n";
        }

};

int Demo::k = 111;

int Main()
{
    cout<<"Value of k is : "<<Demo::k<<"\n";
    Demo::Fun();

    Demo obj1(11,21);
    Demo obj2(51,101);
    Demo obj3(121,151);

    cout<<"Size of object is :"<<sizeof(obj1)<<"\n";

    obj1.Display();
    obj2.Display();
    obj3.Display();

    return 0;
}