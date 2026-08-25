#include<iostream>
using namespace std;

class Arithmetic
{
    public:
        int no1;
        int no2;

        Arithmetic()  //default
        {
           no1 = 0;
           no2 = 0;


        }

        Arithmetic(int i, int j) //parameterized
        {
            no1 = i;
            no2 = j;
        }




};
int main()
{

  Arithmetic aobj1;
  Arithmetic aobj2(10,11);

  cout<<aobj1.no1<<"\n";
  cout<<aobj1.no2<<"\n";

  cout<<aobj2.no1<<"\n";
  cout<<aobj2.no2<<"\n";




    return 0;
}