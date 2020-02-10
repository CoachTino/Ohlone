package lab3;


/*
 * This program gathers rainfall amounts for the year.
 * It uses the RainFall class to display the total,
 * average, highest, and lowest rainfall amounts.
 */

public class RainFallApp
{
		// create an array for months in one year.
		public static String[] months = {"January", "February", "March", "April",
								  "May", "June", "July", "August", "September",
								  "October", "November", "December"};
				
		public static void main(String[] args)
		{
				final int numberOfMonths = 12;
			
				// create an array to hold rainfall for one year
				int[] rainFall = new int[numberOfMonths];
				
				// get the annual rainfall and store them in rainFall array
				RainFall.getRainFall(rainFall);
			
				// create a RainFall object initialized with the rainFall array
				RainFall rainFall2016 = new RainFall(rainFall);
				
				System.out.println("The total rain fall for 2016 is "
									+ rainFall2016.getTotalRainFall()
									+ " inches of rain.");
				System.out.println("The average rain fall for 2016 is "
									+ rainFall2016.getAverageRainFall()
									+ " inches of rain.");
				System.out.println("The month with the most rain was "
									+ rainFall2016.validateMostRainMonth()
									+ " with "
									+ rainFall2016.getMostRainFall()
									+ " inches of rain.");
				System.out.println("The month with the least rain was "
									+ rainFall2016.validateLeastRainMonth()
									+ " with "
									+ rainFall2016.getLeastRainFall()
									+ " inches of rain.");
				
				
				

				
				
			
			
			
			
			
	}		
			
		
		
		
	

}
