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
            cout<<"Inside Derived Destructor \n";
        }
     
};
class DerivedX : public Derived
{
    public:
        int A;

        DerivedX()
        {
            cout<<"Inside DerivedX Constructor \n";
        }
        ~DerivedX()
        {
            cout<<"Inside DerivedX Destructor \n";
        }
        void Run()
        {
            cout<<"Inside DerivedX Run() \n";
        }

};

int main()
{   
        DerivedX dobj;
        
        dobj.Fun();
        dobj.Gun();
        dobj.Sun();
        dobj.Run();


    return 0;
}
