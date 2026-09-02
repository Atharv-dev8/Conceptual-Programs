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
class DerivedX extends Derived
{
    public int A;

    public DerivedX()
    {
        System.out.println("Inside DerivedX Constructor");
    }
    public void Run()
    {
        System.out.println("Inside Derived Run()");
    }
}





class Multilevel
{
    public static void main(String A[])
    {
            DerivedX dobj = new DerivedX();

            dobj.Fun();
            dobj.Gun();
            dobj.Sun();
            dobj.Run();
    }
}
