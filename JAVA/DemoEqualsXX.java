class Marvellous
{
    public int i,j;
    public Marvellous(int a, int b)
    {
        this.i = a;
        this.j = b;
    }

    public boolean equals(Object obj2)
    {
        Marvellous temp = (Marvellous)obj2;
        
        if((this.i == temp.i) && (this.j == temp.j))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}


class DemoEqualsXX
{
    public static void main(String A[])
    {
        Marvellous mobj1 =new Marvellous(11,21);
        Marvellous mobj2 = new Marvellous(11,21);

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