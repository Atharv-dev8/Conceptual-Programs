#include <stdio.h>
union Demo
{
    int i;
    float f;
    
};


int main()
{
   union Demo dobj;
   dobj.f = 11.0;



   printf("%d\n", dobj.f);
    printf("%d\n", dobj.i);






    return 0;
}