#include <stdio.h>
int main()
{
char ch = 'A';         //1byte
int i = 11;            //4byte
float no = 3.14f;      //4byte
double d = 90.785634;  //8bytes

printf("%c\n",ch);
printf("%d\n",i);
printf("%f\n",no);
printf("%lf\n",d);

    return 0;
}