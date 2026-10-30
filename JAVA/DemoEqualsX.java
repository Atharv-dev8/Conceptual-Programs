class Marvellous
{
    public int i,j;
    public Marvellous(int a, int b)
    {
        this.i = a;
        this.j = b;
    }
}


class DemoEqualsX
{
    public static void main(String A[])
    {
        Marvellous mobj1 =new Marvellous(11,21);
        Marvellous mobj2 = mobj1;

        if(mobj1.equals(mobj2))
        {
            System.out.println("Objects Are Equal");
        }
        else
        {
            System.out.println("Objects Are Not Equal");
        }

    }
}