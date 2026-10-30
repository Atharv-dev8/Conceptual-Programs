interface Calculations
{
    int Addition(int No1, int No2);
    int Substraction(int No1, int No2);
}

class Mathematics implements Calculations
{
    public int Addition(int No1, int No2)
    {
        return  No1 + No2;
    }
    public int Substraction(int No1, int No2)
    {
        return  No1 - No2;
    }
    public int Multiplication(int No1, int No2)
    {
        return  No1 * No2;
    }
}

class InterfaceDemo
{
    public static void main(String A[])
    {
        Mathematics mobj = new Mathematics();
        System.out.println(mobj.Addition(11,10));
        System.out.println(mobj.Substraction(11,10));
        System.out.println(mobj.Multiplication(11,10));
    }
}

