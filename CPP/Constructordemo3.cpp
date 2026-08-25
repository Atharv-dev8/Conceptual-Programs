#include<iostream>
using namespace std;

class PPA
{

    public:
        int no1;
        int no2;

            PPA()  //Default constructor
            {
                cout<<"inside default constructor\n";
            }

            PPA(int a, int b)    //Parameterized constructor
            {
                cout<<"inside parameterized constructor\n";
            }

            PPA(PPA &obj)         //copy constructor
            {
                cout<<"inside copy constructor\n";

            }
            ~PPA()
            {

                cout<<"inside destructor\n";
            }

};
int main(){
        PPA pobj;
            
        PPA pobj1;              //Default
        PPA pobj2;              //parameterized
        PPA pobj3(pobj1);       //copy


    return 0;
}
