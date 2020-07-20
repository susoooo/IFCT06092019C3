
package ifct0609.ejercicios1;

import javax.swing.JFrame;

public class SimpleFrame extends JFrame 
{
    public SimpleFrame() 
    {
        super("Ventanita 1");
        setSize(800, 600);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);
    }

    public static void main(String[] args) 
    {
        SimpleFrame sf = new SimpleFrame();
    }
}
