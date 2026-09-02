#include <iostream>
using namespace std;

class Base
{
    public:

        int i, j;

        Base()
        {
        cout<<"Inside Base Constructor \n";
        }

        void Fun()
        {
            cout<<"Inside Base Fun() \n";
        }
        void Gun()
        {
            cout<<"Inside Base Gun() \n";
        }
        ~Base()
        {
        cout<<"Inside Base Destructor \n";
        }
};
class Derived : public Base
{
    public:
       

        int x, y;

        void  Sun()
        {
            cout<<"Inside Base Sun() \n";
        }

     
        Derived()
        {
            cout<<"Inside Derived Constructor \n";
        }
        ~Derived()
        {
            cout<<"Inside Derived Constructor \n";
        }
     
};

int main()
{

        cout<<sizeof(Base)<<"\n";
         cout<<sizeof(Derived)<<"\n";
   
   
        




    return 0;
}
