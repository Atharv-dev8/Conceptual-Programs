import java.net.*;
import java.io.*;

public class ChatClientX 
{
    public static void main(String A[])     
    {
       try
       {

            
            Socket sobj = new Socket("localhost",5100);
            System.out.println("client gets connected Succesfully");

            PrintStream pobj = new PrintStream(sobj.getOutputStream());
            BufferedReader bobj1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));
            BufferedReader bobj2 = new BufferedReader(new InputStreamReader(System.in));

            System.out.println("Marvellous Client Is Running");
            String str1 = null, str2 = null;
            System.out.println("Enyter Message For Server : ");
            while(!(str1 = bobj2.readLine()).equals("end"))
            {
                pobj.println(str1);
                str2 = bobj1.readLine();
                System.out.println("Server Says : "+ str2);
                System.out.println("Enter Message For Server : ");
            }
            pobj.close();
            bobj1.close();
            bobj2.close();
            sobj.close();
            
       }    //End of Try
       catch(Exception eobj)
       {
        System.out.println(eobj);
       }
    }  //end of main
}   //end of class
