#include <iostream>

#include "userInterface.h"
#include "linkedList.h"
#include "fileInputAndOutput.h"


using std::cout;
using std::endl;
using std::cin;
using std::string;

	userInterface::userInterface(){

		setUserName();
	}

	void userInterface::setUserName(){

		cout << "\nHello, what is your name? ";
		getline(cin, name);
		greetTheUser();
	}

	string userInterface::getUserName(){

		return name;
	}

	void userInterface::greetTheUser(){
	
		cout << "\nWassup " << getUserName() << "!" << endl;
		cout << "\nSo this program will check to see if \n";
		cout << "given sentences or phrases are palindromes.\n";
		cout << "You can either enter your own string\n";
		cout << "or choose from some sample text files I have.\n";

		createMenu();
	}

	void userInterface::createMenu(){

		cout << "\nWould you like to:" << endl;
		cout << "1: Type in a sentence or a phrace to be checked\n";
		cout << "2: Use examples from text files that I have\n";
		cout << "3: Quit the program\n";

		cout << "\nYour choice: ";
		validateUserInput(menuOption);	

		if(menuOption == 1){
		
			setUserInputPalindrome();

		}else if(menuOption == 2){

			createTextFileMenu();
		}
	}

	void userInterface::setUserInputPalindrome(){

		cin.ignore();

		cout << "Great! Please input your sentence or phrase: (press return with an empty line when done)\n";
		// getline(cin, userInputPalindrome);
		string temp;
		while(getline(cin, temp) && !temp.empty()){

			userInputPalindrome += " " + temp;
		}
		cout << "Thank you!\n";

		linkedList stackList;
		linkedList queueList;

		createStackFromUserInputPalindrome(stackList);
		createQueueFromUserInputPalindrome(queueList);
		
		if(checkPalindrome(stackList, queueList)){
			cout << "noice\n";
		}
		repeat();
	}

	void userInterface::createTextFileMenu(){

		cout << "\nThis is fun! The Text files I have are:" << endl;
		cout << "1: PalindromeSamples.txt\n";
		cout << "2: tinosCoolPalindromes.txt\n";
		cout << "3: Quit the program\n";

		cout << "\nYour choice: ";
		validateUserInput(textFileOption);	

 		fileInputAndOutput readFileObject;

		if(textFileOption == 1){
		
	 		readFileObject.readFromFile(readFileObject.getPalindromeSample());

		}else if(textFileOption == 2){

	 		readFileObject.readFromFile(readFileObject.getTinosCoolPalindrome());
		}
		createOptionalTextFileMenu(readFileObject);
	}

	void userInterface::createOptionalTextFileMenu(fileInputAndOutput &rfo){

		char option;
		string fileName;
		cout << "Would you like to output the palindromes to a seperate text file? (y/n)\n";
		cin >> option;

		if(option != 'y' && option != 'Y' && option != 'n' && option != 'N'){

			cout << "bruh you entered something all wrong. we just gon exit\n";

		}else if(option == 'y' || option == 'Y'){
			cout << "Enter a file name: ";
			cin.ignore();
			getline(cin, fileName);
			fileInputAndOutput writeFileObject;
			writeFileObject.writeToFile(rfo, fileName);
		}
		repeat();
	}

	void userInterface::createStackFromUserInputPalindrome(linkedList &sl){

		string tempLine = userInputPalindrome;

		tempLine = stringToLowerCase(tempLine);
		tempLine = removeUnwantedCharacters(tempLine);

		for (char c: tempLine){
		
			sl.addNodeAtBeginning(c);
		}
	}

	void userInterface::createQueueFromUserInputPalindrome(linkedList &ql){

		string tempLine = userInputPalindrome;

		tempLine = stringToLowerCase(tempLine);
		tempLine = removeUnwantedCharacters(tempLine);

		for (char c: tempLine){
		
			ql.appendNode(c);
		}
	}

	void userInterface::repeat(){

		char repeat;
		cout << "Would you like to do another? (y/n)\n";
		cin >> repeat;

		if(repeat != 'y' && repeat != 'Y' && repeat != 'n' && repeat != 'N'){

			cout << "bruh you entered something all wrong. we just gon exit\n";

		}else if(repeat == 'y' || repeat == 'Y'){
			createMenu();
		}
		cout << "\nPeace out dude!\n";
	}