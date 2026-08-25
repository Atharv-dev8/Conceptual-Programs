#include <stdio.h>



    

    #pragma pack(1)
    struct Demo
    {
        int i;
        char ch;
        float f;
        

    };
    int main()
    {
        struct Demo dobj1;
        struct Demo dobj2;

        struct  Demo *dp = NULL;

        dp = &dobj2;
        // direct accesing operator
        dobj1.i = 11;
        dobj1.ch = 'A';
        dobj1.f = 90.99f;

        // indierct accesing operator
        dp-> i = 21;
        dp-> ch = 'B';
        dp-> f = 91.99;

        printf("%d\n",dobj1.i);
        printf("%d\n", dp->i);




        return 0;

    }





    

    
        
    
    
 




    