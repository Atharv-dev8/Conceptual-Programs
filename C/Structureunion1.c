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
    printf("%d\n", sizeof(struct Demo ));





    return 0;
}