#include <stdio.h>

#pragma pack(1)
struct Demo
{
    int i;
    float f;
    double d;

};


int main()
{
    struct Demo dobj;

    dobj.i = 11;
    dobj.f = 3.14;
    dobj.d = 9.759826;






    return 0;
}