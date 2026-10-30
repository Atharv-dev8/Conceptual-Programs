#include <iostream>
using namespace std;

#pragma pack(1)
class Base
{
    public:
        int i, j;
        
        void fun()                  //1000
        { cout<<"Base fun\n";}

        void gun()                  //2000
        {cout<<"Base gun\n";}

        virtual void sun()          //3000
        { cout<<"Base sun\n";}

        virtual void run()          //4000
        { cout<<"Base run\n";}


        

};          //16 bytes      8(ptr)+4(int)+4(int)


#pragma pack(1)
class derived : public Base
{
    public:
        int x;

        void fun()                  //5000
        { cout<<"Derived fun\n";}

        void sun()                  //6000
        { cout<<"Derived sun\n";}

        virtual void mun()         //7000
        { cout<<"Derived mun\n";}

        void bun()         //8000
        { cout<<"Derived bun\n";}




};      //20 bytes

int main()
{

    Base *bp = new derived();

    cout<<sizeof(Base);
     cout<<sizeof(derived);


    bp->fun();
    bp->gun();
    bp->sun();
    bp->run(); 
    // bp->mun();         //conceptual error
    // bp->bun();         //conceptual error


    return 0;
}