
package ifct0609.mavenproject2;
 
import javax.swing.BorderFactory;
import javax.swing.JButton;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.SwingUtilities;
import javax.swing.UIManager;
 
public class SwingJPanelDemo extends JFrame 
{
    private JLabel labelAnho = new JLabel("Año: ");
    private JLabel labelMes = new JLabel("Mes: ");
    private JComboBox boxAnho = new JComboBox();
    private JComboBox boxMes = new JComboBox();
    private JButton buttonVista = new JButton("Vista Previa");
    private JButton buttonPrint = new JButton("Imprimir");
    private JButton buttonCancelar = new JButton("Cancelar");
     
    public SwingJPanelDemo() 
    {
        super("Alquiler por mes y año");
        
        setSize(250, 200);
         
        JPanel newPanel = new JPanel();
    
        newPanel.add(labelAnho);

        newPanel.add(boxAnho);
    
        newPanel.add(labelMes);
    
        newPanel.add(boxMes);
         
        newPanel.add(buttonVista);

        newPanel.add(buttonPrint);

        newPanel.add(buttonCancelar);

        add(newPanel);
         
        // pack();
        // setLocationRelativeTo(null);
    }
     
    public static void main(String[] args) 
    {
        // set look and feel to the system look and feel
        try 
        {
            UIManager.setLookAndFeel(UIManager.getSystemLookAndFeelClassName());
        } 
        catch (Exception ex) 
        {
            ex.printStackTrace();
        }
         
        SwingUtilities.invokeLater(new Runnable() 
        {
            @Override
            public void run() 
            {
                new SwingJPanelDemo().setVisible(true);
            }
        });
    }
}
