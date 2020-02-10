package lab3;

import java.util.Scanner;

public class InheritenceApp {

	public static void main(String[] args) {

		
				// instantiate a worker
				Employee Jim = new ProductionWorker("Jim Brown", "16-B", "01/01/17", 1, 12);
				System.out.println(Jim);
				
				
				Scanner keyboard = new Scanner(System.in);
				Employee Jose = new ProductionWorker();
				
				System.out.println("Please enter the employee's name: ");
				Jose.setEmployeeName(keyboard.nextLine());
				System.out.println("Please enter the employee's ID Number: ");
				Jose.setEmployeeNumber(keyboard.nextLine());
				System.out.println("Please enter the employee's hire date"
								+ " in the MM/DD/YY format: ");
				Jose.setHireDate(keyboard.nextLine());
				System.out.println("Please enter the employee's shift type 1 or 2: ");
				Jose.setShift(keyboard.nextInt());
				System.out.println("Please enter the employee's hourly pay: ");
				Jose.setPayRate(keyboard.nextDouble());
				System.out.println();
				
				System.out.println(Jose.getEmployeeName() + "\n" + Jose.getEmployeeNumber( )+ "\n" +  
						Jose.getHireDate()+ "\n" + Jose.getShift() + "\n" + Jose.getPayRate());
				
				
	}

}