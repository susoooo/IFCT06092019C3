/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.gozerelgozeriano.webbrowser;
import chrriis.dj.nativeswing.NSComponentOptions;
import chrriis.dj.nativeswing.swtimpl.components.JWebBrowser;
import java.awt.BorderLayout;
import javax.swing.JPanel;
import javax.swing.JTabbedPane;

/**
 *
 * @author Usuario
 */
public class NavigationControl extends JPanel {

    protected static final String LS = System.getProperty("line.separator");

    public NavigationControl() {
        super(new BorderLayout());
        final JTabbedPane tabbedPane = new JTabbedPane();
        tabbedPane.setTabLayoutPolicy(JTabbedPane.SCROLL_TAB_LAYOUT);
        final JWebBrowser webBrowser = new JWebBrowser(NSComponentOptions.destroyOnFinalization());
        webBrowser.setBarsVisible(false);
        webBrowser.setStatusBarVisible(true);
        webBrowser.navigate("https://www.amazon.es/");  

        tabbedPane.addTab("Amazon!!!", webBrowser);
        
        //final JPannel pnl = new JPannel;
        add(tabbedPane, BorderLayout.CENTER);
    }
}
