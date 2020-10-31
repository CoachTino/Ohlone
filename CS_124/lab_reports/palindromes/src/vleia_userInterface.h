#ifndef USERINTERFACE_H
#define USERINTERFACE_H

// needed header files
#include "vleia_dataValidation.h"
#include "vleia_linkedList.h"
#include "vleia_fileInputAndOutput.h"

	// userInterface inherits dataValidation function members and attributes
	class userInterface: public dataValidation{

	private:

		// needed to store user menu option and user text file option
		int menuOption, textFileOption;

		// needed to store user name and palindrome
		std::string name;
		std::string userInputPalindrome;

	public:

		// constructor calls setUserName()
		userInterface();

		// takes user's name from console input
		// stores it in memory 
		// calls greetTheUser()
		void setUserName();

		// returns the user's name
		std::string getUserName();

		// greets the user with their name
		// gives a brief description of the program
		// calls createMenu()		
		void greetTheUser();

		// asks the user to enter their own palindrome
		// or choose from sample text files
		// or exit the program
		void createMenu();

		// asks the user to input their string to
		// creates a stack and a queue
		// tests if the user string is a palindrome
		// print out outcome of palindrome validation
		void setUserInputPalindrome();

		// give the user a selection from 2 files to test palindromes
		void createTextFileMenu();

		// get the user input of the file name
		// write the list of palindromes from memory into a file (user input name)
		void createOptionalTextFileMenu(fileInputAndOutput &);
		
		// create a stack of chars in each node from the string of user input
		void createStackFromUserInputPalindrome(linkedList &);	

		// create a stack of chars in each node from the string of user input	
		void createQueueFromUserInputPalindrome(linkedList &);

		// lets the user choose to repeat the program or end it
		void repeat();

	};

#endif