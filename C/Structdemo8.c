#include <stdio.h>

    #pragma pack(1)
    struct Demo
    {
        int i;
        float f;
        

     };
    int main()
    {
        

        struct Demo Arr[3];
          
        Arr[0].i = 11;
        Arr[0].f = 11.0;

        Arr[1].i = 21;
        Arr[1].f = 21.0;

        Arr[2].i = 51;
        Arr[2].f = 51.0;

    
        

        printf("%d\n", sizeof(Arr));
        printf("%d\n", Arr[0].i);
        printf("%f\n", Arr[0].f);

        



         return 0;

    }





    

    
        
    
    
 




    