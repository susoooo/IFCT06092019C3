
package ifct0609.ejercicios1;

import javax.swing.JFrame;



public class SimpleFrame extends JFrame 
{
    public SimpleFrame() 
    {
        super("Alquiler por mes y año");
        setSize(300, 240);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);
        
    }

    public static void main(String[] args) 
    {
        SimpleFrame sf = new SimpleFrame();
        
    }
}
