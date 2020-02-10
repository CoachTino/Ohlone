package lab5;

import javax.swing.*;

import java.awt.*;
import java.awt.event.*;
import java.text.DecimalFormat;

public class MPGCalculatorApplet extends JApplet{

		private JPanel gallonsPanel, milesPanel, mpgPanel, buttonPanel;
		private JTextField gallonsField, milesField, mpgField;
		private JButton mpgButton;
		
		
		public void init()
		{
			 buildGallonsPanel();
			 buildMilesPanel();
			 buildButtonPanel();
			 buildMpgPanel();
			 
			 setLayout(new GridLayout(4,1));
			 
			 add(gallonsPanel);
			 add(milesPanel);
			 add(buttonPanel);
			 add(mpgPanel);
		}
		
		public void buildGallonsPanel()
		{
			gallonsPanel = new JPanel();
			
			JLabel gallonsLabel = new JLabel("Gas tank capacity (gallons): ");
			
			gallonsField = new JTextField(3);
			
			gallonsPanel.setLayout(new FlowLayout(FlowLayout.LEFT));
			gallonsPanel.add(gallonsLabel);
			gallonsPanel.add(gallonsField);
			
			setVisible(true);
		}
		
		public void buildMilesPanel()
		{
			milesPanel = new JPanel();
			
			JLabel milesLabel = new JLabel("Miles drivable per tank: ");
			
			milesField = new JTextField(9);
			
			milesPanel.setLayout(new FlowLayout(FlowLayout.LEFT));
			milesPanel.add(milesLabel);
			milesPanel.add(milesField);
		}
		
		public void buildMpgPanel()
		{
			mpgPanel = new JPanel();
			
			JLabel mpgLabel = new JLabel("Your car's MPG is: ");
			
			mpgField = new JTextField(4);
			mpgField.setEditable(false);
			
			mpgPanel.setLayout(new FlowLayout(FlowLayout.LEFT));
			mpgPanel.add(mpgLabel);
			mpgPanel.add(mpgField);
		}
		
		public void buildButtonPanel()
		{
			buttonPanel = new JPanel();
			
			mpgButton = new JButton("Calculate MPG");
			
			buttonPanel.setLayout(new FlowLayout(FlowLayout.LEFT));
			buttonPanel.add(mpgButton);
			mpgButton.addActionListener(new EventHandler());
		}
		
		private class EventHandler implements ActionListener
		{
			public void actionPerformed(ActionEvent event)
			{
				MilesPerGallonCalculator mpgCalc = new MilesPerGallonCalculator();
				DecimalFormat formatter = new DecimalFormat("0.0");
				
				if(event.getSource() == mpgButton)
				{
					try
					{
						mpgCalc.setGallons(Double.parseDouble(gallonsField.getText()));	
						mpgCalc.setMiles(Double.parseDouble(milesField.getText()));
						
						if(mpgCalc.getGallons() <= 0 || mpgCalc.getMiles() <= 0)
							throw new MilesPerGallonException(mpgCalc.getGallons(), mpgCalc.getMiles());
						
						mpgField.setText(formatter.format(mpgCalc.calculateMilesPerGallon()));
					}
					catch(NumberFormatException e)
					{
						JOptionPane.showMessageDialog(null, "Error: you an entered invalid character "
														  + "or did not enter a value.");
					}
					catch(Exception e)
					{
						JOptionPane.showMessageDialog(null, e.getMessage());
					}
				}
			}
			
		}
		
		
	
	
}
