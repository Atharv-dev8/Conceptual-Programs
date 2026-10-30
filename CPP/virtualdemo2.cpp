#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        void fun()
        {   cout<<"Inside fun of Base\n";   }
};

class Derived : public Base
{
    public:
        int x;
        void fun()
        {   cout<<"Inside fun of Derived\n";    }
};

int main()
{
    cout<<sizeof(Base)<<"\n";       // 8
    cout<<sizeof(Derived)<<"\n";    // 12
    
    Base *bp = new Derived();      // Upcasting

    bp->fun();                      // Base fun

    return 0;
}