#include <iostream>
#include <locale>		// std::locale, std::tolower

#include "vleia_dataValidation.h"
#include "vleia_ListNode.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

	string dataValidation::removeUnwantedCharacters(string str){

		string tempString;

		for(int i = 0; i < str.size(); i++){

			// ascii values found at
			// asciitable.com
			if((str[i] > 96 && str[i] < 123) || (str[i] > 47 && str[i] < 58) || (str[i] > 64 && str[i] < 91)){

				if(str[i] > 58 && str[i] < 96){
					str[i] += 32;
				}
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

		ListNode *stackPointer = sl.getHead();
		ListNode *queuePointer = ql.getHead();

		string stackTempString;
		string queueTempSTring;

		bool result = true;

		while(stackPointer && queuePointer){

			if(!(stackPointer->data == queuePointer->data)){
				result = false;
			}
			stackPointer = stackPointer->next;
			queuePointer = queuePointer->next;

			sl.removeNodeAtBeginning();
			ql.removeNodeAtBeginning();
		}
		return result;
	}

	void dataValidation::createStackFromUserInputPalindrome(linkedList &sl, string s){

		string tempLine = s;

		tempLine = removeUnwantedCharacters(tempLine);

		for(char c: tempLine){
		
			sl.addNodeAtBeginning(c);
		}
	}

	void dataValidation::createQueueFromUserInputPalindrome(linkedList &ql, string s){

		string tempLine = s;

		tempLine = removeUnwantedCharacters(tempLine);

		for (char c: tempLine){
		
			ql.appendNode(c);
		}
	}

	string dataValidation::validateStrings(string str){

		int attempts = 0;

		try{
			while(str.empty()){
				if(attempts == 3){

				 	throw 42;
				}
				cout << "You didn't enter anything. Please try again: ";
				getline(cin, str);
				attempts++;			
			}
		}catch(int x){
		
			cout << "\nYou failed to enter a valid option 3 times in a row. Exiting the program.\n";
			exit(EXIT_FAILURE);
		}
		return str;
	}

	bool dataValidation::validateYesOrNo(char option){
		
		if(option != 'y' && option != 'Y' && option != 'n' && option != 78){

			cout << "You entered an invalid option. Exiting the program.\n";
			return false;
	
		// ascii values found at
		// asciitable.com
		}else if(option == 'n' || option == 78){

			return false;
		}

		return true;
	}