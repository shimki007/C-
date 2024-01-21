#include<iostream>
using namespace std;

class Demo      //Class Defination
{
    public:     // Access Specifier
        int i;      //Class chi Characteristics
        int j;      //Class chi Characteristics
        
        Demo()      //Default Constructor
        {
            cout<<"Inside Default Constructor\n";
            i = 0;
            j = 0;
            
        }

        // int A = 11;
        // int B = 21;
        Demo(int A, int B)      // Parametrised Constructor
        {
            cout<<"Inside Parametrised Constructor\n";
            i = A;
            j = B;
        }

        // Demo &ref = obj2;
        Demo(Demo &ref)      // Copy Constructor
        {
            cout<<"Inside Copy Constructor\n";
            i = ref.i;
            j = ref.j;
        }
        ~Demo()
        {
            cout<<"Inside Destructor\n";
        }

};

int main()
{
    Demo obj1;
    Demo obj2(11,21);
    Demo obj3(obj2);

    return 0;
}