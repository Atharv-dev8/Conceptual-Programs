import java.util.*;
class Exceptiondemo2X
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        
        
        int arr[] = {11,21,51,101,111};
        
        try
        {

        int index = 0;

        System.out.println("Enter the index : ");
        index = sobj.nextInt();
        

        System.out.println("index is : "+ arr[index]);
        }
        catch(ArrayIndexOutOfBoundsException aobj)
        {
            System.out.println("inside catch block");
        }
        System.out.println("end of main ");
    }
}   