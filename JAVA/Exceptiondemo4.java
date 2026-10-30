import java.util.*;

class AgeInvalid extends Exception
{
    public AgeInvalid(String str)
    {
        super(str);
    }
}

class Exceptiondemo4
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        int Age = 0;
        Age = sobj.nextInt();

        System.out.println("Enter Your Age");
        try
        {
            if (Age<18) 
            {
                throw new AgeInvalid("you are under age");
            }
            else
            {                
                System.out.println("welcome to --");
            }
        }
        catch(AgeInvalid aobj)
        {
            System.out.println("Exception occured due to age");
        }
    }
}   