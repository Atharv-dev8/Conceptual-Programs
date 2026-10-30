import javax.swing.*;

class GUI4
{


    public static void main(String A[])
    {
        JFrame fobj = new JFrame("Marvellous PPA");
        JButton bobj = new JButton("Submit");

        bobj.setBounds(100,100,150,50);

        fobj.add(bobj);

        fobj.setSize(400,300);

        fobj.setVisible(true);

        fobj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}