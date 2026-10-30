#include<iostream>
using namespace std;

#pragma pack(1)
class Base
{
    public:
        int i,j;
        virtual void fun()
        {   cout<<"Inside fun of Base\n";   }
};

#pragma pack(1)
class Derived : public Base
{
    public:
        int x;
        void fun()
        {   cout<<"Inside fun of Derived\n";    }
};

int main()
{
    cout<<sizeof(Base)<<"\n";       // 16
    cout<<sizeof(Derived)<<"\n";    // 24
    
    Base *bp = new Derived();      // Upcasting

    bp->fun();                      // Derived fun

    return 0;
}