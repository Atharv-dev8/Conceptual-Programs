#include <iostream>
using namespace std;


class BaseA
{
    public:
        int i,j;

         BaseA()
         {
            cout<<"inside basea constructor \n";
         }
        ~BaseA()
         {
            cout<<"inside basea destructor \n";
         }

         void fun()
         {
              cout<<"inside basea fun()\n";
         }



};
class BaseB
{
    public:

       int x,y;

         BaseB()
         {
            cout<<"inside basea constructor \n";
         }
        ~BaseB()
         {
            cout<<"inside baseb destructor \n";
         }

         void gun()
         {
              cout<<"inside baseb gun()\n";
         }
};
class Derived : public BaseB,public BaseA
{
    public:

        int A;

        Derived()
        {
           cout<<"inside derived constructor \n"; 
        }
        ~Derived()
        {
           cout<<"inside derived destructor \n"; 
        }

        void sun()
        {
              cout<<"inside derived sun()\n";
        }


};

int main()
{
   Derived dobj;
    
   dobj.fun();
   dobj.gun();
   dobj.sun();



    return 0;
}