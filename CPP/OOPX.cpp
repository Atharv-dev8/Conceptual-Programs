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

        int Addition()
        {
            int ans = 0;
            ans = no1 + no2;
            return ans;
        }


};
int main()
{

 Arithmetic aobj1(10,11);
 int result = 0;

 result = aobj1.Addition();

 cout<<"Addition is : "<<result<<" \n";






    return 0;
}