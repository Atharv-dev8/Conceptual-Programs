#include <stdio.h>
int main()
{

    //1 2 4 8 this values we can give pragma pack

    #pragma pack(1)
    struct Demo
    {
        int i;
        char ch;
        float f;
        

    };
    printf("%d\n", sizeof(struct Demo));

    
        
    
    
 




    return 0;
}