#include<iostream>
using namespace std;

class Addition 
{
    public:
    int no1 = 10, no2 = 20;

    int findmax()
    {
        if(no1>no2)
        {
            return no1;
        }
        else{
            return no2;
        }
    }
};
 int main()
        {
            Addition aobj;


            cout<<aobj.findmax();

            return 0;
        }



