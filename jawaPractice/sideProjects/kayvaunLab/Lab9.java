package sideProjects.kayvaunLab;

public class Lab9{
	
	// driver code
	public static void main(String[] args){
			
		// declare object of Movie class and initialize attributes using constructors
		Movie mov0 = new Movie("Casino Royale", "Eon Productions", "PG13");
		
		// declare object of Movie class and initialize attributes using constructors
		Movie mov1 = new Movie("Pulp Fiction", "Miramax");
		
		// declare object of Movie class and initialize attributes using constructors
		Movie mov2 = new Movie("Naruto The Last", "Viz Media", "PG13");
		
		// print out the first movie object and it's attributes
		System.out.println("Movie 1: " + mov0.getTitle());
		System.out.println("Ratings: " + mov0.getRating());
		System.out.println("Studio: " + mov0.getStudio());

		// print out the second movie object and it's attributes
		System.out.println("\nMovie 2: " + mov1.getTitle());
		System.out.println("Ratings: " + mov1.getRating());
		System.out.println("Studio: " + mov1.getStudio());

		// print out the third movie object and it's attributes
		System.out.println("\nMovie 3: " + mov2.getTitle());
		System.out.println("Ratings: " + mov2.getRating());
		System.out.println("Studio: " + mov2.getStudio());		
		}
}