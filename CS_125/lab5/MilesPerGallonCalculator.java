package lab5;
import java.util.Scanner;
public class MilesPerGallonCalculator {

	private double gallons, miles, milesPerGallon;
	
	Scanner keyboard = new Scanner(System.in);
	
	public MilesPerGallonCalculator(double g, double m, double mpg)
	{
		gallons = g;
		miles = m;
	}
	
	public MilesPerGallonCalculator()
	{
		
	}
	
	public void inputData()
	{
		gallons = keyboard.nextInt();
		miles = keyboard.nextInt();
	}
	
	public void setGallons(double g)
	{
		gallons = g;
	}
	
	public void setMiles(double m)
	{
		miles = m;
	}
	
	public double getGallons()
	{
		return gallons;
	}
	
	public double getMiles()
	{
		return miles;
	}
	public double calculateMilesPerGallon()
	{
		milesPerGallon = (miles / gallons);
		return milesPerGallon;
	}
	
}
