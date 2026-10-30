#include <iostream>
using namespace std;

#pragma pack(1)
class Base
{
    public:
        int i,j;

        int addition (int no1, int no2)             //1000
        {
            return no1+no2;
        }
        
        virtual int substraction(int no1, int no2) = 0;


};
#pragma pack(1)
class Derived : public Base
{
    public:
        int x;

        int substraction(int no1, int no2)      //2000
        {
            return no1-no2;
        }

         int Multiplication(int no1, int no2)   //3000
        {
            return no1*no2;
        }
        
};

int main()
{
    Derived dobj;
    int ret = 0;

    cout<<"size of base class is : "<<sizeof(Base)<<"\n";
    cout<<"size of Derived class is : "<<sizeof(Derived)<<"\n";

    ret = dobj.addition(11,10);
    cout<<"addition is: "<<ret<<"\n";

    ret = 0;
    ret = dobj.substraction(11,10);
    cout<<"substraction is: "<<ret<<"\n";

    ret = 0;
    ret = dobj.Multiplication(11,10);
    cout<<"Multiplication is: "<<ret<<"\n";

  
    return 0;
}