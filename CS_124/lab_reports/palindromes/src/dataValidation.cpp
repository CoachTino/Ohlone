#include <iostream>
#include <locale>		// std::locale, std::tolower

#include "dataValidation.h"
#include "linkedList.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

	string dataValidation::stringToLowerCase(string str){

		string temp = str;
	    std::locale loc;

		for(int i = 0; i < temp.length(); i++){

			temp[i] = std::tolower(str[i], loc);
		}

		return temp;
	}


	string dataValidation::removeUnwantedCharacters(string str){

		string tempString;

		for(int i = 0; i < str.size(); i++){

			// ascii values found at
			// asciitable.com
			if((str[i] >= 97 && str[i] <= 122) || (str[i] >= 48 && str[i] <= 57)){

				tempString += str[i];
			}
		}

		return tempString;
	}

	void dataValidation::validateUserInput(int &choice){

		int attempts = 1;

		cin  >> choice;
		if(choice == 3){

			cout << "Exiting the program...\n";
			exit(EXIT_FAILURE);
		}
		try{
			if(!choice){

				 	throw 'a';
			}
		}catch(char y){

			cout << "\nYou entered an invalid character. Exiting the program." << endl;
			exit(EXIT_FAILURE);
		}
		try{
			while(choice < 1 || choice > 3){
				
				cout << "Invalid entry, try again: ";
				cin >> choice;
				attempts++;		

				if(choice == 3){

					cout << "Exiting the program...\n";
					exit(EXIT_FAILURE);
				}
				if(attempts >= 3 && (choice < 1 || choice > 3)){

				 	throw 42;
				}
			}
		}catch(int x){
		
			cout << "\nYou failed to enter a valid option 3 times in a row. Exiting the program.\n";
			exit(EXIT_FAILURE);
		}
	}

	bool dataValidation::checkPalindrome(linkedList &sl, linkedList &ql){

		// sl.printList();
		// ql.printList();
		
		return true;
	}