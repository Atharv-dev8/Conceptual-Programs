 class Demo implements Runnable
 {
    public void run()
    {
        System.out.println("thread is running......");
    }
 }
 
 
 class Threaddemo3
{
    
    public static void main(String A[]) 
    {
        System.out.println("inside main thread");

        Demo dobj1 = new Demo();
        Demo dobj2 = new Demo();

        dobj1.start();      //error
        dobj2.start();      //error         


    }
}
