interface A
{
    void fun();
}

interface B
{
    void fun();
}

class Demo implements A,B
{
    public void fun()
    {
        System.out.println("Inside fun");
    }
}

class InterfaceDemoXXX
{
    public static void main(String A[])
    {
        Demo dobj = new Demo();

        dobj.fun();
    }
}

