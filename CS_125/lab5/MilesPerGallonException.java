package lab5;

public class MilesPerGallonException extends Exception{
	
	public MilesPerGallonException()
	{
		super("Error: you entered bad data.");
	}
	
	public MilesPerGallonException(String m, String n)
	{
		super("Error: please enter a value.");
	}
	
	public MilesPerGallonException(double a, double b)
	{
		super("Error: you entered bad data.");
	}

}
