package lab2;

/*
* Name: Valentino Lei'a
* Course: CS125-01
* Lab #: Lab two
* Submission date: 10:00 PM, Wednesday (7/5)
* Brief Description: The driver code to run AreaComputing Class.
*/

import java.util.Scanner;

public class AreaComputingApp {

	 public static void main(String []args){
		 
		 
		 
		 	Scanner keyboard = new Scanner(System.in); 
	 	
		 	System.out.println("Enter the radius of the circle in inches: ");
		 	AreaComputing.radius = keyboard.nextDouble();
		 	System.out.println("The area of the circle is: "
		 						+ AreaComputing.calculateArea(AreaComputing.radius)
		 						+ " inches squared."
		 						+ "\n");
		 	
		 	System.out.println("Enter the radius of the cylinder in inches: ");
		 	AreaComputing.radius = keyboard.nextDouble();
		 	System.out.println("Enter the height of the cylinder in inches: ");
		 	AreaComputing.height = keyboard.nextDouble();
		 	System.out.println("The area of the cylinder is: "
		 						+ AreaComputing.calculateArea(AreaComputing.radius,
		 													  AreaComputing.height)
		 						+ " inches squared."
		 						+ "\n");
		 	
		 	System.out.println("Enter the length of the rectange in inches: ");
		 	AreaComputing.length = keyboard.nextInt();
		 	System.out.println("Enter the width of the rectange in inches: ");
		 	AreaComputing.width = keyboard.nextInt();
		 	System.out.println("The area of the rectangle is: "
		 						+ AreaComputing.calculateArea(AreaComputing.length, 
		 													  AreaComputing.width)
		 						+ " inches squared."
		 						+ "\n");	 	
		 	
	 }	
}
