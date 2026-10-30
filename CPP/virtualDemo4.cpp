#include <iostream>
using namespace std;

#pragma pack(1)
class Base
{
    public:
        int i, j;
        
        void fun()
        { cout<<"Base fun\n";}

        void gun()
        {cout<<"Base gun\n";}

        virtual void sun()
        { cout<<"Base sun\n";}

         virtual void run()
        { cout<<"Base run\n";}


        

};          //16 bytes      8(ptr)+4(int)+4(int)


#pragma pack(1)
class derived : public Base
{
    public:
        int x;

        void fun()
        { cout<<"Derived fun\n";}

        void sun()
        { cout<<"Derived sun\n";}

         virtual void mun()
        { cout<<"Derived mun\n";}

        void bun()
        { cout<<"Derived bun\n";}




};      //20 bytes

int main()
{

    Base *bp = new derived();

    bp->fun();
    bp->gun();
    bp->sun();
    bp->run(); 
    bp->mun();         //conceptual error
    bp->bun();         //conceptual error


    return 0;
}