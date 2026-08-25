#include<iostream>
using namespace std;

class Demo
{
    public:

         int no1;
         int no2;
         static int X;

         Demo(int i, int j)
        {
         int no1 = i;
         int no2 = j;

         }

         void fun()
         {
            cout<<"Inside fun\n";
            cout<<no1<<"\n";
              cout<<no2<<"\n";
                cout<<X<<"\n";
         }

        static void gun()
         {
            cout<<"Inside gun\n";
         
            cout<<X<<"\n";
         }

};
int Demo :: X = 11;

int main()
{

   cout<<Demo :: X<<"\n";

    Demo::gun();
    return 0;
}


