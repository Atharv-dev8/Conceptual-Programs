#include <stdio.h>

    #pragma pack(1)
    struct Demo
    {
        int no;
        float Arr[3];
        

     };
    int main()
    {
        

        struct Demo dobj;
          
        printf("%d\n", sizeof(dobj));

        dobj.no = 10;
        
        dobj.Arr[0] = 11;
        dobj.Arr[1] = 21;
        dobj.Arr[2] = 51;

        printf("%f\n", dobj.Arr[1]);



         return 0;

    }





    

    
        
    
    
 




    