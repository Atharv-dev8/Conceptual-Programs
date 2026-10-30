abstract class Base
{
    
        public int i,j;

        public int addition (int no1, int no2)
        {
            return no1+no2;
        }
        
        public abstract int substraction(int no1, int no2) ;

}

class Derived extends  Base
{
   
        public int x;

        public int substraction(int no1, int no2)      //2000
        {
            return no1-no2;
        }

        public int Multiplication(int no1, int no2) 
        {
            return no1*no2;
        }
        
}

class Abstractdemo

{
    public static void main(String A[]) {
        
    
            Derived dobj = new Derived();
            int ret = 0;

            
            ret = dobj.addition(11,10);
            System.out.println("Addition is: "+ ret);

            ret = 0;
            ret = dobj.substraction(11,10);
            System.out.println("substraction is: "+ ret);

            ret = 0;
            ret = dobj.Multiplication(11,10);
            System.out.println("Multiplication is: "+ ret);

    }
}