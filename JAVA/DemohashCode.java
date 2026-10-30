class Marvellous
{
    public int i,j;
    public Marvellous(int a, int b)
    {
        this.i = a;
        this.j = b;
    }
}


class DemohashCode
{
    public static void main(String A[])
    {
        Marvellous mobj1 =new Marvellous(11,21);
        Marvellous mobj2 = new Marvellous(11,21);

        System.out.println(mobj1.hashCode());
        System.out.println(mobj2.hashCode());

        System.out.println(mobj1.getClass());
        System.out.println(mobj2.getClass());



    }
}