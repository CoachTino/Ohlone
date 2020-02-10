package lab3;

public class ProductionWorker extends Employee 
						
{

			public static final int dayShift = 1;
			public static final int nightShift = 2;
	
			// field to hold shift
			private int shift;
			// field to hold payRate
			private double hourlyPay;
			
			/*
			 * This constructor accepts the production worker's
			 * name, id number, and hire date as arguments
			 */
			public ProductionWorker(String name,String number,String date, int s, double hP)
			{
				/*
				 * call the superclass constructor to 
				 * initialize employee name, number and hire date
				 */
				super(name, number, date);
				
				// initialize shift and payRate
				shift = s;
				hourlyPay = hP;
			}
			
			public ProductionWorker()
			{
				super();
			}
			
			public void setShift(int s)
			{
				shift = s;
			}
			
			public void setPayRate(double hP)
			{
				hourlyPay = hP;
			}
			
			public int getShift()
			{
				return shift;
			}
			
			public double getPayRate()
			{
				return hourlyPay;
			}
			
			public String toString()
			{				
				String str = super.toString();
					str += "\nEmployee Shift:"; 
					if (shift == dayShift)
						str += " Day.";
					else if (shift == nightShift)
						str += " Night.";	   
				return str += "\nPay Rate: $" + hourlyPay + " per hour.";		
			}
}