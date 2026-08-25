#include<iostream>
using namespace std;

int Addition(int no1,int  no2)
{
    int ans = 0;
    ans = no1 + no2;

    return ans;

}

int main()
{

    int value1 = 0, value2 = 0, Result = 0;

    cout<<"Enter first number: \n";
    cin>>value1;

    cout<<"Enter second number\n";
    cin>>value2;

    Result = Addition(value1 , value2);

    cout<<"Addition is:"<<Result<<"\n";




    return 0;
}