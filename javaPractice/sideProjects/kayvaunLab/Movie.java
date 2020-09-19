package sideProjects.kayvaunLab;

public class Movie{
	
	// delcare private members/attributes of the class
	private String title;
	private String studio;
	private String rating;
	
	// empty constructor that does nothing
	public Movie() {
		
	}

	// constructor that takes two string arguments
	// and sets them to the title and studio private members
	// and sets the rating private member to "R"
	public Movie(String t, String s) {
		
		title = t;
		studio = s;
		rating = "R";
	}
	
	// constructor that takes three string arguments and
	// sets them to the title, studio, and rating private members
	public Movie(String t, String s, String r) {
		
		title = t;
		studio = s;
		rating = r;
	}
	
	// getter method that returns private member title when called
	public String getTitle() {
		
		return title;
	}

	// getter method that returns private member studio when called
	public String getStudio() {
		
		return studio;
	}

	// getter method that returns private member rating when called
	public String getRating() {
		
		return rating;
	}
}
























/*
*/