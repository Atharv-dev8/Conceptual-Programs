class Demo
{
    public Demo()
    {
        System.out.println("inside default constructor");
    }
    public Demo(int i, int j)
    {
        System.out.println("inside parameterized constructor");
    }



}




class Constructors_demo
{
    public static void main(String A[]) {
        Demo dobj = new Demo();
        Demo dobj2 = new Demo(11,21);
    }

}