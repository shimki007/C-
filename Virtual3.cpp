#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;
         void Fun()      //defination
        {
            cout<<"Inside base Fun \n";
        }
        void Gun()      //defination
        {
            cout<<"Inside base Gun \n";
        }
        void Sun()      //defination
        {
            cout<<"Inside base Sun \n";
        }
        void Run()      //defination
        {
            cout<<"Inside base Run \n";
        }
};

class Derived : public Base
{
    public:
        int a,b;
        void Gun()      //Redefination
        {
            cout<<"Inside Derived Gun \n";
        }
        void Run()      //Redefination
        {
            cout<<"Inside Derived Run \n";
        }
};

int main()
{
    Base *bp = new Derived;
    bp->Fun();
    bp->Gun();
    bp->Sun();
    bp->Run();

    return 0;
}