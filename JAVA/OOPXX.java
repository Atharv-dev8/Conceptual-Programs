class Arithmatic
{
    public int no1;
    public int no2;

    public Arithmatic()  //default constructor
    {
        this.no1 = 0;
        this.no2 = 0;
    }
    public Arithmatic (int i, int j)  //parameterized constructor
    {
          this.no1 = i;
           this.no2 = j;
    }

    public int Addition()
    {
        int ans = 0;
            ans = this.no1 + this.no2;
            return ans;
    }
    public int Substraction()
        {
            int ans = 0;
            ans = this.no1 - this.no2;
            return ans;
        }

}



class OOPXX
{ 
    public static void main(String A[])
    {
        Arithmatic aobj1 = new Arithmatic(21,10);
        int Result = 0;

        Result = aobj1.Addition();
        System.out.println("Addition is:"  + Result);

        Result = aobj1.Substraction();
        System.out.println("Substraction is:" + Result);

    }


}
