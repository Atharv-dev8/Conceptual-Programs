import java.util.*;
class Exceptiondemo1
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        
        int no1=0,no2=0,ans=0;

        System.out.println("Enter first number : ");
        no1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        no2 = sobj.nextInt();

        ans = no1/no2;          //Exception prone code
        
        System.out.println("Divison is : "+ ans);
    }
}   