package lab3;

/*
 * A class that holds the employee name, id number, and hire date for an employee 
 */

public class Employee 
{
			private String employeeName,		// Employee Name
						   employeeNumber,		// Employee ID Number, format: XXX-L where X is a number 0-9 and L is a letter from A-M
						   hireDate;			// Date Employee Was Hired
			private int shift;
			private double hourlyPay;
			
			
			// arg constructor
			public Employee(String name, String number, String date)
			{
				employeeName = name;
				employeeNumber = number;	
				hireDate = date;
			}
			
			// no arg constructor
			public Employee()
			{
				
			}
			
			public void setEmployeeName(String name)
			{
				employeeName = name;
			}
			
			public void setEmployeeNumber(String number)
			{
				if (validEmployeeNumber(number))
					employeeNumber = number;
				else 
					employeeNumber = "INVALID EMPLOYEE NUMBER";
			}
			
			public void setHireDate(String date)
			{
				hireDate = date;
			}
			
			public void setShift(int s)
			{
				shift = s;
			}
			
			public void setPayRate(double hP)
			{
				hourlyPay = hP;
			}
			
			// accessor method to return value of the employeeName field
			public String getEmployeeName()
			{
				return employeeName;
			}
			
			// accessor method to return value of the employeeNumber field
			public String getEmployeeNumber()
			{
				return employeeNumber;
			}
			
			// accessor method to return value of the hireDate field
			public String getHireDate()
			{
				return hireDate;
			}
			
			public int getShift()
			{
				return shift;
			}
			
			public double getPayRate()
			{
				return hourlyPay;
			}
			
			public boolean validEmployeeNumber(String number)
			{
				boolean status = true;
				if (number.length() != 5)
					{
					status = false;
					}
				else 
					{
					if (number.length() == 5 || 
					
				   ((!Character.isDigit(number.charAt(0))) || 
				   ((!Character.isDigit(number.charAt(1)))) ||
				   ((!Character.isDigit(number.charAt(2)))) ||
				   (number.charAt(3) == '-') ||
				   ((!Character.isDigit(number.charAt(4)))) ||
			   	   (!(number.charAt(4) >= 'A' && number.charAt(4) <= 'M'))));
					status = true;
					}
				return status;
			}
			
		    // toString method. need validation
		    // checks on format, char limit, char type
			public String toString()
			{
				String str;
				str = "Employee Name: " + employeeName + "\nEmployee Number: ";
				if (validEmployeeNumber(employeeNumber) == false)
					str += "INVALID EMPLOYEE NUMBER.";
				else
					  str += employeeNumber;
				
				return str += "\nHire Date:" + hireDate;
			}
	
}