import java.util.*;
class Exceptiondemo1X
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        
        int no1=0,no2=0,ans=0;

        try
        {
            System.out.println("Enter first number : ");
            no1 = sobj.nextInt();

            System.out.println("Enter second number : ");
            no2 = sobj.nextInt();

            ans = no1/no2;      
        }  
        catch(ArithmeticException aobj)     //abobj will catch exception theown by JVM
        {
            System.out.println("Exception occurd" + aobj);

        }
        finally
        {
            System.out.println("Inside finally block");
        }     

        System.out.println("Divison is : "+ ans);           //here divison is not zero in case of e.g = 5/0;  bcz we alredy declare ans =0 then atlast it give 0
    }
}   