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
        return "Value of i: "+this.i+"  Value of j : "+this.j;
    }
}


class DemotoStringXX
{
    public static void main(String A[])
    {
        Marvellous mobj1 =new Marvellous(11,21);
        Marvellous mobj2 = new Marvellous(51,101);

        System.out.println(mobj1);      
        System.out.println(mobj2);

    }
}