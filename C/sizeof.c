#include <stdio.h>
int main()
{
char ch = 'A';         //1bits
int i = 11;            //4byte
float no = 3.14f;      //4byte
double d = 90.785634;  //8bytes

printf("%d\n",sizeof(ch));
printf("%d\n",sizeof(i));
printf("%d\n",sizeof(no));
printf("%d\n",sizeof(d));

    return 0;
}