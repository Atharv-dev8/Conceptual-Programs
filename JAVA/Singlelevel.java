class Base
{
    public int i;
    public int j;

    public Base()   //Default
    {
        System.out.println("Inside Base Constructor");
    }
    
    public void Fun()
    {
        System.out.println("Inside Base Fun()");
    }
    public void Gun()
    {
        System.out.println("Inside Base Gun()");
    }

}
class Derived extends Base
{
    public int x;
    public int y;

    public Derived()
    {
        System.out.println("Inside Derived Constructor");
    }

    public void Sun()
    {
        System.out.println("Inside Derived Sun()");
    }
}





class Singlelevel 
{
    public static void main(String A[])
    {
            Derived dobj = new Derived();

            dobj.Fun();
            dobj.Gun();
            dobj.Sun();
    }
}
