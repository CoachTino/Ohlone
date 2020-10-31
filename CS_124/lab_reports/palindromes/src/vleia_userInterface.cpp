#include <iostream>

// needed header files
#include "vleia_userInterface.h"
#include "vleia_linkedList.h"
#include "vleia_fileInputAndOutput.h"

// to make my life easier
using std::cout;
using std::endl;
using std::cin;
using std::string;

	// constructor calls setUserName()
	userInterface::userInterface(){

		setUserName();
	}

	// takes user's name from console input
	// stores it in memory 
	// calls greetTheUser()
	void userInterface::setUserName(){

		// ask for the user's name
		cout << "\nHello, what is your name? ";

		// store user input
		getline(cin, name);

		// validate the user input
		name = validateStrings(name);

		// call greetUser()
		greetTheUser();
	}

	// returns the user's name
	string userInterface::getUserName(){

		return name;
	}

	// greets the user with their name
	// gives a brief description of the program
	// calls createMenu()
	void userInterface::greetTheUser(){
	
		// print out to the console 
		cout << "\nWassup " << getUserName() << "!" << endl;
		cout << "\nSo this program will check to see if \n";
		cout << "given sentences or phrases are palindromes.\n";
		cout << "You can either enter your own string\n";
		cout << "or choose from some sample text files I have.\n";

		// call createMenu()
		createMenu();
		cout << "\nPeace out dude!\n";
	}

	// asks the user to enter their own palindrome
	// or choose from sample text files
	// or exit the program
	void userInterface::createMenu(){

		// print the menu to the console
		cout << "\nWould you like to:" << endl;
		cout << "1: Type in a sentence or a phrase to be checked\n";
		cout << "2: Use examples from text files that I have\n";
		cout << "3: Quit the program\n";

		cout << "\nYour choice: ";

		// take user input and validate it
		validateUserInput(menuOption);	

		// if the user chose option 1
		if(menuOption == 1){
		
			// call setUserInputPalindrome()
			setUserInputPalindrome();

		// if the user chose option 2
		}else if(menuOption == 2){

			// call createTextFileMenu()
			createTextFileMenu();
		}
	}

	// asks the user to input their string to
	// creates a stack and a queue
	// tests if the user string is a palindrome
	// print out outcome of palindrome validation
	void userInterface::setUserInputPalindrome(){

		// clear cin from last getline() call
		cin.ignore();

		// ask user for their phrase or sentence
		cout << "Great! Please input your sentence or phrase:\n";

		// get user input
		getline(cin, userInputPalindrome);

		// validate the string
		userInputPalindrome = validateStrings(userInputPalindrome);

		// console format
		cout << endl;


		// create object of linkedList to represent stack
		linkedList stackList;

		// create object of linkedList to represent queue
		linkedList queueList;


		// create stack and queue for testing if the string is a palindrome or not
		createStackFromUserInputPalindrome(stackList);
		createQueueFromUserInputPalindrome(queueList);
		
		// if the string is a palindrome
		if(checkPalindrome(stackList, queueList)){

			// print out the user input palindrome and succcess message
			cout << userInputPalindrome;
			cout << " is a palindrome! It reads the same forwards and backwards.\n";

		}else{

			// print out failure message and user input palindrome
			cout << "Sorry buddy, \"" << userInputPalindrome << "\" is not a palindrome.\n";
		}

		// ask the user if they want to repeat the program
		repeat();
	}

	// give the user a selection from 2 files to test palindromes
	void userInterface::createTextFileMenu(){

		// print to the console the choices the user has
		cout << "\nThis is fun! The Text files I have are:" << endl;
		cout << "1: PalindromeSamples.txt\n";
		cout << "2: PalindromeTest2.txt\n";
		cout << "3: Quit the program\n";

		cout << "\nYour choice: ";

		// validate user input 
		validateUserInput(textFileOption);	

		// create object to read data from file into memory
		// to test if any of the lines are palindromes
 		fileInputAndOutput readFileObject;

 		// used to see if the file didn't have any palindromes
 		bool savedPalindromes = false;

 		// if the user selected file 1
		if(textFileOption == 1){
		
			// boolean is equal to return value of reading the file (true or false)
	 		savedPalindromes = readFileObject.readFromFile(readFileObject.getPalindromeSample());

	 	// if the user selected file 2
		}else if(textFileOption == 2){

			// boolean is equal to return value of reading the file (true or false)
	 		savedPalindromes = readFileObject.readFromFile(readFileObject.getTinosCoolPalindrome());
		}

		// if the file had 1 or more palindromes
		if(savedPalindromes){

			// call createOptionalTextFileMenu to let them provide a file name
			createOptionalTextFileMenu(readFileObject);
		}

		// ask the user if they want to repeat the program
		repeat();
	}
	

	// get the user input of the file name
	// write the list of palindromes from memory into a file (user input name)
	void userInterface::createOptionalTextFileMenu(fileInputAndOutput &rfo){

		// to hold y or n value
		char option;

		// to store name of the file
		string fileName;

		// printout to the console to ask for input
		cout << "Would you like to output the palindromes to a seperate text file? (y/n)\n";

		// take user input
		cin >> option;

		// if option is y or Y
		if(validateYesOrNo(option)){

			// ask for the name of the file
			cout << "Enter a file name: ";
			
			// clear cin from last getline() call
			cin.ignore();

			// get userinput
			getline(cin, fileName);

			// validate user input
			fileName = validateStrings(fileName);

			// create object of fileInputAndOutput to write to a file
			fileInputAndOutput writeFileObject;

			// call write to file function to write the data from 
			// memory into the file
			writeFileObject.writeToFile(rfo, fileName);
		}
	}

	// create a stack of chars in each node from the string of user input
	void userInterface::createStackFromUserInputPalindrome(linkedList &sl){

		// temp string = the string the user input for a palindrome
		string tempLine = userInputPalindrome;

		// remove all special charactars
		tempLine = removeUnwantedCharacters(tempLine);

		// for each char in the array tempLine
		for(char c: tempLine){
		
			// push that char to the stack
			sl.addNodeAtBeginning(c);
		}
	}

	// create a queue of chars in each node from the string of user input
	void userInterface::createQueueFromUserInputPalindrome(linkedList &ql){

		// temp string = the string the user input for a palindrome
		string tempLine = userInputPalindrome;

		// remove all special charactars
		tempLine = removeUnwantedCharacters(tempLine);

		// for each char in the array tempLine
		for (char c: tempLine){

			// push that char to the stack
			ql.appendNode(c);
		}
	}

	// lets the user choose to repeat the program or end it
	void userInterface::repeat(){

		// to hold y or n value
		char repeat;

		// printout to the console to ask for input
		cout << "\nWould you like to do another? (y/n)\n";

		// take user input
		cin >> repeat;

		// if option is y or Y
		if(validateYesOrNo(repeat)){

			// call createMenu()
			createMenu();
		}
	}
