
	public class employee{
		
		public String firstName;
		public String lastName;
		private int employeeID;
		private double employeeWage;
		private int hoursWorked;
		
		// all a constructor is
		// is a method
		// the thing that seperates constructors from 
		// other methods is
		// the name of the method
		// EVERY CONSTRUCTOR ALWAYS ALWAYS ALWAYS ALWAYS ALWAYS
		// has the same name as the class that it is defined in
		// CONSTRUCTORS:
		// you do  not have to declare the access specifier
		// you do not have to declare the return type ie. void, int, double, String (data type)
		
		employee(){
			System.out.println("brody you have no name youre an idiot");
		}
		
		employee(String f){
			
			firstName = f;
			
			//System.out.println("what kind of first name is " + firstName + " you freaking dingus");
		}
		
		employee(String f, String l){
			
			firstName = f;
			lastName = l;
		
			System.out.println(firstName);
			System.out.println(lastName);
		}
		
		public void kayvaunsCoolMethod() {
				
		}
		
		public void kayvaunsCoolMethod(int x) {
			
			
		}
		public void kayvaunsCoolMethod(String y) {
			
			
		}
		public void kayvaunsCoolMethod(int x, int y) {
			
			
		}
		public void kayvaunsCoolMethod(int x, int y, int z) {
			
			
		}
		public void kayvaunsCoolMethod(double x) {
			
			
		}
		public void kayvaunsCoolMethod(double x, double y) {
			
			
		}
	}