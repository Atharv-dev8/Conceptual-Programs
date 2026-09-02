#include<iostream>
using namespace std;

class Arithmetic
{
    public:
        int no1;
        int no2;

        Arithmetic()  //default constructor
        {
          this -> no1 = 0;
          this -> no2 = 0;


        }

        Arithmetic(int i, int j) //parameterized
        {
           this->  no1 = i;
           this-> no2 = j;
        }

        //int Addition(Arithmetic *this)
        int Addition()
        {
            int ans = 0;
            ans = this ->no1 + this -> no2;
            return ans;
        }
        int Substraction()
        {
            int ans = 0;
            ans = this ->no1 - this ->no2;
            return ans;
        }



};
int main()
{

 Arithmetic aobj1(21,10);
 int result = 0;

 //result = addition (&aobj1);
 result = aobj1.Addition();

 cout<<"Addition is : "<<result<<" \n";

 //result = Substraction (&aobj1);
 result = aobj1.Substraction();

 cout<<"Substraction  is : "<<result<<" \n";








    return 0;
}