package lab4;

/*
* Name: Valentino Lei'a
* Course: CS125-01
* Lab #: Lab four
* Submission date: 11:59 pm, Wed (6/28)
* Brief Description: The driver code to run TestScore
*/
import java.util.*;
public class TestScores2 {

    private double scoreOne, scoreTwo, scoreThree, averageScore;
    private String studentName;
    private char grade; 
    
    Scanner keyboard = new Scanner(System.in);
    
    public TestScores2()
    {
    	
    }
    
    public void inputStudentData()
    {
    	studentName = verifyName(studentName);
		scoreOne = verifyDoubleAndRange(scoreOne);
		scoreTwo = verifyDoubleAndRange(scoreTwo);
		scoreThree = verifyDoubleAndRange(scoreThree);
    }

    public char setGrade(double averageScore)
    {
          if (averageScore < 60)
                 grade = 'F';
              else if (averageScore < 70)
                 grade = 'D';
              else if (averageScore < 80)
                 grade = 'C';
              else if (averageScore < 90)
                 grade = 'B';
              else if (averageScore <= 100)
                 grade = 'A';   
          return grade;
    }
    
    public void setStudentName(String n)
    {
    	studentName = n;
    }
    
    public void setScoreOne(double o)
    {
    	scoreOne = o;
    }
    
    public void setScoreTwo(double t)
    {
    	scoreTwo = t;
    }
    
    public void setScoreThree(double th)
    {
    	scoreThree = th;
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
    
    public double computeAverage()
    {
    	averageScore = (scoreOne + scoreTwo + scoreThree) / 3;
        return averageScore;
    }
    
    public char assignLetterGrade()
    {     
     return setGrade(averageScore);
    }
    
    public void printResult()
    {
    	System.out.println(studentName + "'s final grade is " 
    						+ computeAverage() + ", "
    						+ assignLetterGrade() + ".");
    }
    
    public String verifyName(String n)
    {
    	do 
    	{
    		System.out.print("Enter your name: ");
    			try
    			{
    				n = keyboard.nextLine();
    			}
    			catch (InputMismatchException e)
    			{
    				System.out.println("\n" + e.getMessage());
    				System.out.print("Re-");
    			}
    	}while(!n.matches(".*[a-zA-z].*"));
    	return n;
    }
    
    public double verifyDoubleAndRange(double s)
    {
    	boolean exception = false;
    	do
    	{	
    		System.out.println("Enter your test score: ");
    			
    		try
    			{
    				s = keyboard.nextDouble();
    				exception = true;
    			}
    			catch(InputMismatchException e)
    			{
    				System.out.println("Invalid test score");
    				keyboard.next();
    				exception = false;
    			}
    	}while(exception == false);
    	do 
    	{
    		try
    		{
    				if (!(s >= 0 && s <= 100))
   						throw new InvalidTestScore(s);
   			}
   			catch (Exception e)
   			{
   				System.out.println(e.getMessage());
   				do
   		    	{	
   		    		System.out.println("Re-Enter your test score: ");
   		    			
   		    		try
   		    			{
   		    				s = keyboard.nextDouble();
   		    				exception = true;
   		    			}
   		    			catch(InputMismatchException b)
   		    			{
   		    				System.out.println("Invalid test score");
   		    				keyboard.next();
   		    				exception = false;
   		    			}
   		    	}while(exception == false);
   			}		
    	}while(!(s >= 0 && s <= 100));
    return s;
    }
}
