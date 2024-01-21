#include<iostream>
using namespace std;

class Demo
{
    public :
        int  i, j, k;
        Demo()
        {
            cout<<"Inside Constructor \n";
        }
        ~Demo()
        {
            cout<<"Inside Destructor \n";
        }
        void Display()
        {
            cout<<"Inside Display \n";
        }
};

int main()
{
    Demo obj1;
    obj1.Display();

    Demo *ptr = new Demo;
    // Demo *ptr = (Demo *)malloc(sizeof(Demo));        on C

    ptr->Display();

    delete ptr;
    // free(ptr);               on C

    return 0;
}