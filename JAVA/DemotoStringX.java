class Marvellous
{
    public int i,j;
    public Marvellous(int a, int b)
    {
        this.i = a;
        this.j = b;
    }

    public String toString()
    {
        return "inside toString";
    }
}


class DemotoStringX
{
    public static void main(String A[])
    {
        Marvellous mobj1 =new Marvellous(11,21);
        Marvellous mobj2 = new Marvellous(11,21);

        System.out.println(mobj1);      //mobj1.toString
        System.out.println(mobj2);

    }
}