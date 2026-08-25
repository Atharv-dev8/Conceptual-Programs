#include <stdio.h>

void Addition(int no1,int no2)
{
    int result = 0;
    result = no1 + no2;  //business logic
    printf("Addition is : %d\n", result);
}
int main()
{

    int value1 = 0, value2 = 0, Ans = 0 ;

 printf("Enter first  no :");
 scanf("%d", &value1);
 
 printf("Enter second  no :");
  scanf("%d", &value2);

Addition(value1,value2);



    return 0;
}