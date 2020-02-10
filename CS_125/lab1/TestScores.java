package lab1;

/*
 * Name: Valentino Lei'a
 * Course: CS125-01
 * Lab #: Lab one
 * Submission date: 11:59 pm, Wed (6/28)
 * Brief Description: The driver code to run TestScore
 */

public class TestScores {

	private double scoreOne, scoreTwo, scoreThree;
	private String studentName;
	
	public TestScores()
	{
		
	}
	
	public void setStudentName(String name)
	{
		studentName = name;
	}

	public void setTestOne(double one) 
	{
		scoreOne = one;
	}

	public void setTestTwo(double two)
	{
		scoreTwo = two;
	}

	public void setTestThree(double three)
	{
		scoreThree = three;
	}

	public String getStudentName()
	{
		return studentName;
	}
	
	public double getScoreOne()
	{
		return scoreOne;
	}

	public double getScoreTwo()
	{
		return scoreTwo;
	}

	public double getScoreThree()
	{
		return scoreThree;
	}
	
	public double getAverage()
	{
		return (scoreOne + scoreTwo + scoreThree) / 3;
	}
}
