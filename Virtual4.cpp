#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;
        virtual void Fun()      //1000
        {
            cout<<"Inside base Fun \n";
        }
        virtual void Gun()      //2000
        {
            cout<<"Inside base Gun \n";
        }
        void Sun()      //3000
        {
            cout<<"Inside base Sun \n";
        }
        void Run()      //4000
        {
            cout<<"Inside base Run \n";
        }
};

class Derived : public Base
{
    public:
        int a,b;
        virtual void Gun()      //5000
        {
            cout<<"Inside Derived Gun \n";
        }
        void Run()      //6000
        {
            cout<<"Inside Derived Run \n";
        }
        virtual void Mun()      //7000
        {
            cout<<"Inside Derived Mun \n";
        }
};

int main()
{
    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";

    Base *bp = new Derived;
    bp->Fun();
    bp->Gun();
    bp->Sun();
    bp->Run();
    // bp->Mun();   //Error

    return 0;
}