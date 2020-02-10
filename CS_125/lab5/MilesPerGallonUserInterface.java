package lab5;
import java.awt.*;
import java.awt.event.*;

import javax.swing.*;



public class MilesPerGallonUserInterface extends JFrame {

			private JPanel panel;
			private JLabel label1, label2, label3;
			private JTextField milesField, gallonsField;
			private JButton mpgButton;
			private final int window_width = 280;
			private final int window_height = 360;
			
			public MilesPerGallonUserInterface()
			{
				super("MPG Calculator");
			
				setSize(window_width, window_height);
				
				setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
				
				setLayout(new BorderLayout(2,1));
				
				buildPanel();
				
				add(panel);
				
				setVisible(true);
				
			}
			
			public void buildPanel()
			{
				panel = new JPanel();
				
				label1 = new JLabel("Use this app to calculate your car's MPG.");
				panel.add(label1, BorderLayout.NORTH);
				
				label2 = new JLabel("Gas tank capacity (gallons): ");
				gallonsField = new JTextField(2);
				panel.add(label2, BorderLayout.WEST);
				panel.add(gallonsField, BorderLayout.WEST);
				
				label3 = new JLabel("Miles drivable per tank: ");
				milesField = new JTextField(3);
				panel.add(label3, BorderLayout.WEST);
				panel.add(milesField, BorderLayout.WEST);
				
				mpgButton = new JButton("Calculate MPG");
				panel.add(mpgButton, BorderLayout.SOUTH);
				
				EventHandler handler = new EventHandler();
				mpgButton.addActionListener(handler);
				
			}
			
			private class EventHandler implements ActionListener
			{
				public void actionPerformed(ActionEvent event)
				{
					MilesPerGallonCalculator mpgCalc = new MilesPerGallonCalculator();
					
					if(event.getSource() == mpgButton)
					{
						try
						{
							mpgCalc.setGallons(Double.parseDouble(gallonsField.getText()));	
							mpgCalc.setMiles(Double.parseDouble(milesField.getText()));
							
							if(mpgCalc.getGallons() <= 0 || mpgCalc.getMiles() <= 0)
								throw new MilesPerGallonException();
							
							JOptionPane.showMessageDialog(null, "Your car gets "
																+ mpgCalc.calculateMilesPerGallon()
																+ " miles per gallon.");
						}
						catch(NumberFormatException e)
						{
							JOptionPane.showMessageDialog(null, "Error: you entered invalid character.");
						}
						catch(Exception e)
						{
							JOptionPane.showMessageDialog(null, e.getMessage());
						}
					}
				}
			}
}
