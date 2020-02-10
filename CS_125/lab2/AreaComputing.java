package lab2;

/*
* Name: Valentino Lei'a
* Course: CS125-01
* Lab #: Lab two
* Submission date: 10:00 PM, Wednesday (7/5)
* Brief Description: The operation code for the driver class AreaComputingApp.
*/

public class AreaComputing {
                   
	   static double radius, height;
	   static int length, width;
	
        public static double calculateArea(double radius)
        {
        	return Math.PI * radius * radius;
        }
        
        public static double calculateArea(double radius, double height)
        {
        	return Math.PI * radius * radius * height;
        }
        
        public static int calculateArea(int length, int width)
        {
        	return length * width;
        }
}
