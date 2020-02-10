package lab2;

import java.util.Scanner;

public class CircleApp {

	public static void main(String[] args) {

		// create a scanner object to record user input
		Scanner keyboard = new Scanner(System.in);
		
		System.out.println("Please enter the radius of the circle: ");
		Circle circle = new Circle(keyboard.nextDouble());
		
		System.out.println("The area of the circle is "
							+ circle.getArea()
							+ " inches squared.");
		
		System.out.println("The diameter of the circle is "
							+ circle.getDiameter()
							+ " inches squared.");
		
		System.out.println("The circumference of the circle is "
							+ circle.getCircumference()
							+ " inches squared.");
		
	}

}
