interface Demo
{
    int no = 11;    // public static final
    void fun();     // public abstract
}

class Hello implements Demo
{
    public void fun()
    {}
}

class InterfaceDemoXX
{
    public static void main(String A[])
    {
        System.out.println(Demo.no);
        // Demo.no++;  // Demo.no = Demo.no + 1;
        // i++; -> i = i + 1;
    }
}

