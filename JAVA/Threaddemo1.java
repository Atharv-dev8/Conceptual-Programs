 class Threaddemo1 
{
    
    public static void main(String A[]) 
    {
        System.out.println("inside main thread");

        Thread t = Thread.currentThread();                  //thread is static method inside java

        System.out.println("Current thread name  is : "+t.getName());

        System.out.println("current thread Id is : "+t.getId());        //in Thread has been deprecated method

        System.out.println("thrfead is alive or not : "+ t.isAlive());

        System.out.println("thread priority  is : "+t.getPriority());
    }
}
