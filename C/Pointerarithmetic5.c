

#include<stdio.h>
int main(){

    int arr[] = {11,21,51,101,111};
    int *p = NULL;
    int *q = NULL;

    p = &(arr[1]);
    q = &(arr[3]);

    printf("%d\n",*q );  //101

    q = q - 3;

    printf("%d\n",*q ); //11

    return 0;
}