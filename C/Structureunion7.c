#include <stdio.h>
union Demo
{
    int i;
    char ch;    
};


int main()
{
   union Demo dobj;
   dobj.i = 65;



   printf("%d\n", dobj.i);
    printf("%c\n", dobj.ch);






    return 0;
}