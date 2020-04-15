package sideProjects.projectOne;

import java.util.Scanner;

public class test{
	
	public static void main(String[] args){

		
		 int [][] gradesArray = { {87, 96, 70},
					              {68, 87, 90},
					              {94, 100, 90},
					              {100, 81, 82},
					              {83, 65, 85},
					              {78, 87, 65},
					              {85, 75, 83},
					              {91, 94, 100},
					              {76, 72, 84},
					              {87, 93, 73}
		        };
		        System.out.println("Welcome to the grade bool for CSC 210 Introduction to JAva Programming!");
		        //Part 1
		        System.out.println("The grades are:");
		        System.out.println();
		        System.out.println("\t\tTest 1\tTest 2\tTest 3\t Average");

		        
		        // solution to the midterm here
		 
		        int lowestGrade = 100;
		        int highestGrade = 0;
		        int gradeAverage = 0;
		        for(int i = 0; i < gradesArray.length; i++) {
			        System.out.print("Student " + i);
		        	for(int j = 0; j < gradesArray[i].length; j++) {
		        		
		        		// start of part 2
		        		if(gradesArray[i][j] < lowestGrade) {
		        			lowestGrade = gradesArray[i][j];
			            }
			            if(gradesArray[i][j] > highestGrade) {
			            	highestGrade = gradesArray[i][j];
			            }
			           // end of part 2
		        		gradeAverage += gradesArray[i][j];

		        		System.out.print("\t" + gradesArray[i][j]);
		        	}
		        	System.out.println("\t" + " " + ((double)gradeAverage/3));
		        	 gradeAverage = 0;
		        }
		        
		        // end of part 1
		        
		        
		        //your code goes here
		        System.out.println("Lowest grade in the grade book is " + lowestGrade);
		        System.out.println("Highest grade in the grade book is " + highestGrade);
		        
		        //Part3
		        System.out.println("Overall grade distribution:");
		        //your code goes here
		        
		        
	   } 
}


