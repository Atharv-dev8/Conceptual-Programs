 class Demo extends Thread
 {
    public void run()
    {
        System.out.println("thread is running......");
    }
 }
 
 
 class Threaddemo6
{
    
    public static void main(String A[])         throws Exception
    {
        System.out.println("inside main thread");

        Demo dobj1 = new Demo();
        Demo dobj2 = new Demo();

        dobj1.start();
        dobj2.start();

        dobj1.join();               //wait for terminate thread
        dobj2.join();

        System.out.println("end of main thread");               //issue


    }
}
