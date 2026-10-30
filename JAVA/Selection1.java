import java.util.*;
class Selection1{
    

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int no =0;

        System.out.println("Enter no");
        no = sobj.nextInt();
        if ((no % 2) ==0)         //% use to get remainder and == use to compare and = use to copy data 
        {                               //if we write no=0 then asignment operator(=)copy 0 in no 
            System.out.println("no is Even");    
        }else{
            System.out.println("no is odd");
        }
        



    }

}