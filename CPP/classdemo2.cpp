#include<iostream>
using namespace std;

class PPA
{

    public:
        int no1;
        int no2;

void display()
{

    cout<<"inside display\n";
}

};
int main(){
        PPA pobj;
            pobj.no1 = 11;
            pobj.no2 = 21;

            pobj.display();

            cout<<pobj.no1<<"\n";
            cout<<pobj.no2<<"\n";



    return 0;
}
