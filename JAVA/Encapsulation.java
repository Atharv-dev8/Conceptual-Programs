class Marvellous 
{
    public int no1;
    public int no2;

    public void fun()
    {
        System.out.println("Inside Fun");

    }
}

class Encapsulation
{
    public static void main(String A[]) {
        
    
     Marvellous mobj = new Marvellous();      
        mobj.fun();
        System.out.println(mobj.no1);
        System.out.println(mobj.no2);
    }    
}



//line no 18
// Marvellous = blueprint of a house
// new Marvellous() = actually build a house
// mobj = address/reference of that house
