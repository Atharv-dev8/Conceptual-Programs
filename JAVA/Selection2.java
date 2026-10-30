import java.util.*;
class Selection2{
    

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int no =0;

        System.out.println("Enter your age");
        no = sobj.nextInt();
       
        if (no >=18) 
        {
            System.out.println("you are allowed");    
        }else{
            System.out.println("you are not allowed");
        }
        



    }

}