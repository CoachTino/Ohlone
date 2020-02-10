package lab3;

/*
 * This class keeps the rainfall figures for 
 * a year in an array and provides methods for 
 * getting the total and average rainfall, and 
 * the highest and lowest amount of rain.
 */

import java.util.Scanner;

public class RainFall {
		
			private int[] rainFall; // references the rainfall data
	
			public RainFall(int[] r)
			{
				// initialize the field rainFall array 
				// length to match the length of r.
				rainFall = new int[r.length];
				
				// copy the values in r to rainFall
				for (int cV = 0; cV <r.length; cV++)
				{
					rainFall[cV] = r[cV];
				}
			}
			
			// assign values to the elements in rainFall array
			public static void getRainFall(int[] array)
			{
				// create a keyboard object to record input
				Scanner keyboard = new Scanner(System.in);
			
				System.out.println("Enter the rain fall for each month in 2016.");
				
				//get the rainfall for each month
				for (int cV = 0; cV < array.length; cV++)
				{
					System.out.print(RainFallApp.months[cV] + ":");
					array[cV] = keyboard.nextInt();
				}
			}
			// get the sum of rainFall array elements
			public int getTotalRainFall()
			{
				int total = 0; // accumulator
				
				// add up all the values in the rainFall array.
				for (int value : rainFall)
				{
					total += value;
				}
				
				// return the total.
				return total;
			}
			
			public int getAverageRainFall()
			{
				return getTotalRainFall() / rainFall.length;
			}
	
			public int getMostRainFall()
			{
				int mostRainFall = rainFall[0];
				
				for (int cV = 0; cV < rainFall.length; cV++)
				{
					if (rainFall[cV] > mostRainFall)
					mostRainFall = rainFall[cV];
				}
				return mostRainFall;
			}
			
			public int getLeastRainFall()
			{
				int leastRainFall = rainFall[0];
				
				for (int cV = 0; cV < rainFall.length; cV++)
				{
					if (rainFall[cV] < leastRainFall)
						leastRainFall = rainFall[cV];
				}
				return leastRainFall;
			}
			
			public String validateMostRainMonth()
			{
				String mostRainMonth = RainFallApp.months[0];
				
				for (int cV = 0; cV < rainFall.length; cV++)
				{
					if (rainFall[cV] == getMostRainFall())
						mostRainMonth = RainFallApp.months[cV];
				}
				return mostRainMonth;
			}
			
			public String validateLeastRainMonth()
			{
				String leastRainMonth = RainFallApp.months[0];
				
				for (int cV = 0; cV < rainFall.length; cV++)
				{
					if (rainFall[cV] == getLeastRainFall())
						leastRainMonth = RainFallApp.months[cV];
				}
				return leastRainMonth;
			}
}	


