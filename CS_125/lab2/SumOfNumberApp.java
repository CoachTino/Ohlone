package lab2;

/*
* Name: Valentino Lei'a
* Course: CS125-01
* Lab #: Lab two
* Submission date: 10:00 PM, Wednesday (7/5)
* Brief Description: The driver code to run SumOfNumber Class.
*/

public class SumOfNumberApp {

	public static void main(String[] args) {

		SumOfNumber newSumOfNumber = new SumOfNumber();		
				
		newSumOfNumber.negativeValidation(newSumOfNumber.getMaxNumber());
		System.out.println("The sum is " + newSumOfNumber.calculateSum() + ".");				
						
	}

}
