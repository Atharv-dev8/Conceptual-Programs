

class Base
{
        int i, j;
        
        void fun()                  //1000
        { System.out.println("Base fun");}

        void gun()                  //2000
         { System.out.println("Base gun");}

        void sun()                  //3000
         { System.out.println("Base sun");}
        void run()                  //4000
        { System.out.println("Base run");}


        

}        



class derived extends Base
{
    
        int x;

        void fun()                  //5000
         { System.out.println("Derived fun");}

        void sun()                  //6000
         { System.out.println("Derived sun");}
        void mun()                  //7000
         { System.out.println("Derived mun");}

        void bun()                  //8000
         { System.out.println("Derived bun");}




} 

class virtualDemo6{

public static void main(String A[]) 
{

    Base bp = new derived();



    bp.fun();
    bp.gun();
    bp.sun();
    bp.run(); 
    // bp.mun();         //conceptual error
    // bp.bun();         //conceptual error


    }
}
