package lab4;

import javax.swing.*;

import java.awt.event.*;

public class TestScoreGUI extends JFrame {

			private JPanel panel;
			private JLabel label1, label2, label3, label4;
			private JTextField studentNameField,
							   testScoreOneField,
							   testScoreTwoField,
							   testScoreThreeField;
			private JButton averageButton, clearButton, exitButton;
			private final int window_width = 355;
			private final int window_height = 480;
			
			public TestScoreGUI()
			{
				// call the JFrame constructor
				super("Grading Report");
				
				// set the size of the window
				setSize(window_width, window_height);
				
				// specify what happens when the close button is clicked
				setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
				
				// build the panel and add it to the frame
				buildPanel();
				
				// add the panel to the frame's content pane
				add(panel);
				
				// display the window
				setVisible(true);
			}
			
			public void buildPanel()
			{
				// create a JPanel object and let the panel field reference it
				panel = new JPanel();
				
				// create a label to display instructions
				// create a text field 20 characters wide
				// add the field and the label to the panel
				label1 = new JLabel("Student Name: ");
				studentNameField = new JTextField(20);
				panel.add(label1);
				panel.add(studentNameField);
				
				// create a label to display instructions
				// create a text field 20 characters wide
				// add the field and the label to the panel
				label2 = new JLabel("Test One: ");
				testScoreOneField = new JTextField(3);
				panel.add(label2);
				panel.add(testScoreOneField);
				
				// create a label to display instructions
				// create a text field 20 characters wide
				// add the field and the label to the panel
				label3 = new JLabel("Test Two: ");
				testScoreTwoField = new JTextField(3);
				panel.add(label3);
				panel.add(testScoreTwoField);
				
				// create a label to display instructions
				// create a text field 20 characters wide
				// add the field and the label to the panel
				label4 = new JLabel("Test Three: ");
				testScoreThreeField = new JTextField(3);
				panel.add(label4);
				panel.add(testScoreThreeField);
				
				
				// create a button with the caption "calculate average"
				averageButton = new JButton("Calculate Grade");
				panel.add(averageButton);
				
				clearButton = new JButton("Clear");
				panel.add(clearButton);
				
				exitButton = new JButton("Exit");
				panel.add(exitButton);
				
				// create an instance of the EventHandler class
				// add action listeners to text fields and buttons
				EventHandler handler = new EventHandler();
				averageButton.addActionListener(handler);	
				clearButton.addActionListener(handler);
				exitButton.addActionListener(handler);
			}
			
			private class EventHandler implements ActionListener
			{
				public void actionPerformed(ActionEvent event)
					{	
					TestScores2 scores = new TestScores2();
				
					if(event.getSource() == averageButton)
					{
						try
						{
							scores.setStudentName(studentNameField.getText());
							if (!(scores.getStudentName().matches(".*[a-zA-z].*"))    		  ||
					 		   (scores.getStudentName().matches(""))						  ||
					 		   (scores.getStudentName().matches(".*[\\W].*")))
								{
								throw new InvalidTestScore(scores.getStudentName());
						   		}
							
							scores.setScoreOne(Double.parseDouble(testScoreOneField.getText()));
							scores.setScoreTwo(Double.parseDouble(testScoreTwoField.getText()));
							scores.setScoreThree(Double.parseDouble(testScoreThreeField.getText()));
				
		   					if (!(scores.getScoreOne() >= 0 && scores.getScoreOne() <= 100)  ||
							   (!(scores.getScoreTwo() >= 0 && scores.getScoreTwo() <= 100)) ||
							   (!(scores.getScoreThree() >= 0 && scores.getScoreThree() <= 100)))
								{
									throw new InvalidTestScore();
								}

						JOptionPane.showMessageDialog(null, scores.getStudentName() + "'s average test score is " 
																	+ scores.computeAverage() + ".\n "
																	+ "Your final grade is: "
																	+ scores.assignLetterGrade() + ".");
						}
						catch(NumberFormatException e)
						{
							JOptionPane.showMessageDialog(null, "You entered an invalid character for "
																+ "one of the test scores.");
						}
						catch(Exception e)
						{
							JOptionPane.showMessageDialog(null, e.getMessage());
						}
						catch(Throwable e)
						{
							JOptionPane.showMessageDialog(null, e.getMessage());
						}
					}
					if(event.getSource() == clearButton)
						studentNameField.setText("");
						testScoreOneField.setText("");
						testScoreTwoField.setText("");
						testScoreThreeField.setText("");
					if(event.getSource() == exitButton)
						System.exit(0);
					}
			}
		
}
