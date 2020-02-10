package lab4;

public class InvalidTestScore extends Exception
{
		public InvalidTestScore()
		{
			super("Invalid test score.");
		}
	
		public InvalidTestScore(double score)
		{
			super("Invalid test score: " + score);
		}
		
		public InvalidTestScore(String name)
		{
			super("Invalid student name.");
		}
}
