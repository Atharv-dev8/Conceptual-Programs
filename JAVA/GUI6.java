import javax.swing.*;
import java.awt.event.*;

class GUI5
{


    public static void main(String A[])
    {
        JFrame fobj = new JFrame("Marvellous PPA");
        JButton bobj = new JButton("Submit");

        bobj.setBounds(100,100,150,50);

        bobj.addActionListener(new ActionListener() 
        {
            public void actionPerformed(ActionEvent aobj)
            {
                
            }    
        });

        fobj.add(bobj);

        fobj.setLayout(null);

        fobj.setSize(400,300);

        fobj.setVisible(true);

        fobj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}