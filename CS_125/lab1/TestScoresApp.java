package lab1;

import java.util.Scanner;

/*
 * Name: Valentino Lei'a
 * Course: CS125-01
 * Lab #: Lab one
 * Submission date: 11:59 pm, Wed (6/28)
 * Brief Description: The driver code to run TestScoreApp
 */


public class TestScoresApp {
	
			public static void main(String []args) {
				
				// create a scanner object for keyboard input
				Scanner input = new Scanner(System.in);
				
				// create a TestScore object
				TestScores scores = new TestScores();
				
				// get the name of the student
				System.out.println("Enter your name:");
				scores.setStudentName(input.nextLine());
				
				// get the score for test one
				System.out.println("Enter your score for Test 1:");
				scores.setTestOne(input.nextDouble());
				
				// get the score for test two
				System.out.println("Enter your score for Test 2:");
				scores.setTestTwo(input.nextDouble());
				
				// get the score for test three
				System.out.println("Enter your score for test 3:");
				scores.setTestThree(input.nextDouble());
				
				input.close();
				
				
				System.out.println("Your average test score is: " + scores.getAverage());			
		}
}




