#include <iostream>
#include <iomanip>
#include <regex>

#include "createMenu.h"

using std::cout;
using std::cin;
using std::endl;

// create menu as a base class
// create textFiles as a derived class
// create sorting algorithms as derived class
// create greeting/program description as derived class

	createMenu::createMenu(){
		choice = 0;
		int attempts = 0;
	
		cout << "\nMENU" << endl;
		cout << "1: text one" << endl;
		cout << "2: text two" << endl;
		cout << "3: text three" << endl;
		cout << "4: Quit the program.\n" << endl;
		cout << "Please enter the number for the menu item you'd like to choose: " << endl;
		cin >> choice;
		try{
			while(choice < 1 || choice > 4){

				cin >> choice;
				attempts++;
				if(!choice){

					throw 'a';
				}else if(attempts > 1){

					throw 42;
				}
			}
		}catch(char y){

			cout << "You entered an invalid option. Exiting the program." << endl;
			exit(EXIT_FAILURE);
		}catch(int x){

			cout << "You failed to enter a valid option 3 times in a row.\nExiting the program.\n";
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