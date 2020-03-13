package lab1;

import java.lang.Double;
import java.util.Scanner;

public class test {
	
	// create a variable to store five products
	// product 1
	static double prodOne = 2.98;
	// product 2
	static double prodTwo = 4.50;
	// product 3
	static double prodThree = 9.98;
	// product 4
	static double prodFour = 4.49;	
	// product 5
	static double prodFive = 6.87;
	
	// create a variable to store user input of product number
	static double userProductInput;
	
	// create a variable to store product information
	static double userProductReturn;

	// create a variable to store product information
	static double userProduct;
	
	// create a variable to store user input of product number
	static double productQuantity;
	
	public static void main(String[] args)
	{

		// begin our menu
		System.out.println("welcum to the store, press 1 to enter stuff else press 0: ");
		
		// create scanner object to take user input
		Scanner keyboard = new Scanner(System.in);
		
		// get user input and store as double
		userProductInput = keyboard.nextDouble();

		do{	
				// ask for product #
				System.out.println("enter a product # 1-5: ");
			
				// get user input and store as double
				userProduct = keyboard.nextDouble();
			
			
				// loop counter
				if(userProduct != 0) {
				
				// ask for product quantity sold
				System.out.println("enter a product quantity: ");
							
				// get user input for quantity and store as double
				productQuantity = keyboard.nextDouble();
							
							
				
				// chast the double into an integer to use for switch case
				int temp = (int)userProductInput;
				
				switch (temp) {
					
					case 1: userProduct = prodOne;	
							break;
						
					case 2: userProduct = prodTwo;
							break;
						
					case 3: userProduct = prodThree;	
							break;
						
					case 4: userProduct = prodFour;
							break;		
							
					case 5: userProduct = prodFive;	
							break;
				
				}
				userProductReturn += userProduct*productQuantity;
				
				// ask for product #
				System.out.println("done or nah (0 or 1): ");
				
				// get user input and store as double
				userProductInput = keyboard.nextDouble();

			}
		}while(userProductInput != 0);
		// print out user product to console
		System.out.println(userProductReturn);
		System.out.println("loop done");
	}
}
