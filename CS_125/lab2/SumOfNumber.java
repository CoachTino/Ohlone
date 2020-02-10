package lab2;

/*
* Name: Valentino Lei'a
* Course: CS125-01
* Lab #: Lab two
* Submission date: 10:00 PM, Wednesday (7/5)
* Brief Description: The operation code for the driver SumOfNumberApp class.
*/

import java.util.Scanner;

public class SumOfNumber {

	public int number,
		   	   maxNumber,
		   	   sum;
	
	Scanner keyboard = new Scanner(System.in);

	public int getMaxNumber()
	{
		System.out.println("Please enter a positive nonzero integer:");
		maxNumber = keyboard.nextInt();
		return maxNumber;
	}
	
	public int negativeValidation(int number){	
		
		while (maxNumber < 1){
					System.out.print("Invalid integer. ");
					getMaxNumber();
					break;
		}if(maxNumber < 1){
					System.out.println("You must enter a valid integer.");
					System.out.println("Please restart the program.");
					System.exit(0);
		}
			return number;
		}
	
	public int calculateSum(){
		for (number = 1; number <= maxNumber; number++){
					sum = sum + number;		
				}
		return sum;
		}
	}	


