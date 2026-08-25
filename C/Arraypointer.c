#include<stdio.h>
int main()
{
int Arr[] = {10,20,30,40};

printf("%d\n",Arr[2]);
printf("%d\n",*(2+Arr));
printf("%d\n",*(Arr+2));
printf("%d\n",2[Arr]);



    return 0;
}