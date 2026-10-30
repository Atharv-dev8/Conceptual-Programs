#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
};

class Derived : public Base
{
    public:
        int x;
};

int main()
{
    Base *bp1 = new Base();     // No casting
    Base *bp2 = new Derived();      // Upcasting

    Derived *dp1 = new Derived();   // No casting
    //Derived *dp2 = new Base();      // Downcasting

    return 0;
}