#include <iostream>

#include "createMenu.h"

using std::cout;
using std::cin;
using std::endl;

// create menu as a base class
// create textFiles as a derived class
// create sorting algorithms as derived class
// create greeting/program description as derived class

	createMenu::createMenu(){

		choiceOne = 0;
		choiceTwo = 0;
		choiceThree = 0;

		setUserName();
	}

	void createMenu::greetTheUser(){
	
		cout << "\nWassup " << getUsersName() << "!" << endl;
		cout << "\nSo this program will ask you to choose a text file \n";
		cout << "and let you choose 2 of 5 sorting algorithms\n";
		cout << "to sort the words in the file. That way you can see\n";
		cout << "which sorting algorithm is the fastest. You'll also\n";
		cout << "be able to choose if you want to see the first 50\n";
		cout << "items or last 50 items in the dataset. Lastly,\n";
		cout << "you'll have all of the results printed out to you!\n";

		createTextFileMenu();
	}

	void createMenu::setUserName(){

		cout << "\nHello! What's your name? ";
		cin >> name;

		greetTheUser();
	}
	
	std::string createMenu::getUsersName(){

		return name;
	}

	void createMenu::createAlgorithmMenu(){
	
		cout << "\nPlease enter the number for two algorithms you want to copmare run times for.\n" << endl;
		cout << "1: Bubble Sort\n";
		cout << "2: Selection Sort\n";
		cout << "3: Insertion Sort\n";
		cout << "4: Merge Sort\n";
		cout << "5: Quick Sort\n";
		cout << "6: Quit the program.\n";

		cout << "\nFirst option: ";
		takeUserInput(choiceOne);		
		if(choiceOne == 6){
			cout << "Exiting the program...\n";
			exit(EXIT_FAILURE);
		}
		cout << "\nSecond option: ";
		takeUserInput(choiceTwo);
		if(choiceTwo == 6){
			cout << "Exiting the program...\n";
			exit(EXIT_FAILURE);
		}
		cout << "\nGood choices! Running the algorithms now...\n\n";
	}
			
	void createMenu::createTextFileMenu(){

		cout << "\nPlease enter the number for three texts you want to sort.\n" << endl;
		cout << "1: Alice's Adventures in Wonderland\n";
		cout << "2: The Odyssey\n";
		cout << "3: Adventures of Huckleberry Finn\n";
		cout << "4: Leviathan\n";
		cout << "5: Dr. King's \"I have a Dream\"\n";
		cout << "6: Quit the program.\n";

		cout << "\nFirst option: ";
		takeUserInput(choiceOne);		
		if(choiceOne == 6){
			cout << "Exiting the program...\n";
			exit(EXIT_FAILURE);
		}
		cout << "\nSecond option: ";
		takeUserInput(choiceTwo);		
		if(choiceTwo == 6){
			cout << "Exiting the program...\n";
			exit(EXIT_FAILURE);
		}
		cout << "\nThird option: ";
		takeUserInput(choiceThree);
		if(choiceThree == 6){
			cout << "Exiting the program...\n";
			exit(EXIT_FAILURE);
		}
		createAlgorithmMenu();
	}

	void createMenu::takeUserInput(int &choice){

		int attempts = 1;

		cin  >> choice;
		try{
			while(choice < 1 || choice > 6){

				cout << "Invalid entry, try again: ";
				cin >> choice;
				attempts++;
				if(!choice){

					throw 'a';
				}else if(attempts >= 3 && (choice < 1 || choice > 6)){

					throw 42;
				}
			}
		}catch(char y){

			cout << "\nYou entered an invalid option. Exiting the program." << endl;
			exit(EXIT_FAILURE);
		}catch(int x){

			cout << "\nYou failed to enter a valid option 3 times in a row.\nExiting the program.\n";
			exit(EXIT_FAILURE);
		}
	}

	/*
		choice = ipo.inventoryMenu();
		while(choice != 4){

			switch(choice){
				case 1:{
					ipo.addNewRecords();
					break;
				}
				case 2:{
					ipo.displayRecords();
					break;
				}
				case 3:{
					ipo.changeRecords();
					break;
				}
			}
			choice = ipo.inventoryMenu();
		}
	*/