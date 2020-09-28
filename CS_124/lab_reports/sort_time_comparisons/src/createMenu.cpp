#include <iostream>
#include <fstream>

#include "createMenu.h"
#include "fileManip.h"

using std::cout;
using std::cin;
using std::endl;
using std::vector;

// create menu as a base class
// create textFiles as a derived class
// create sorting algorithms as derived class
// create greeting/program description as derived class

	createMenu::createMenu(){

		textOptionOne = 0;
		textOptionTwo = 0;
		textOptionThree = 0;
		algorithmOptionOne = 0;
		algorithmOptionTwo = 0;		

		setUserName();
	}

	void createMenu::greetTheUser(){
	
		cout << "\nWassup " << getUsersName() << "!" << endl;
		cout << "\nSo this program will ask you to choose a text file \n";
		cout << "and let you choose 2 of 5 algorithms\n";
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
	
	string createMenu::getUsersName(){

		return name;
	}

	void createMenu::createAlgorithmMenu(fileManip & fmo, vector<string> &vect, bool &firstPass){
				
		vector<string> temp1(vect);
		vector<string> temp2(vect);

		if(firstPass){
			cout << "\nPlease enter the number for two algorithms you want to compare run times for.\n" << endl;
			cout << "1: Bubble Sort\n";
			cout << "2: Selection Sort\n";
			cout << "3: Insertion Sort\n";
			cout << "4: Merge Sort\n";
			cout << "5: Quick Sort\n";
			cout << "6: Quit the program.\n";

			cout << "\nFirst option: ";
			takeUserInput(algorithmOptionOne);		
			if(algorithmOptionOne == 6){
				cout << "Exiting the program...\n";
				exit(EXIT_FAILURE);
			}
			cout << "\nSecond option: ";
			takeUserInput(algorithmOptionTwo);
			if(algorithmOptionTwo == 6){
				cout << "Exiting the program...\n";
				exit(EXIT_FAILURE);
			}
			cout << "\nGood choices! Running the algorithms now...\n\n";

			processAlgorithmInput(fmo, vect, algorithmOptionOne);
			processAlgorithmInput(fmo, temp2, algorithmOptionOne);
			processAlgorithmInput(fmo, temp1, algorithmOptionOne);

		}else if(!firstPass){
			processAlgorithmInput(fmo, vect, algorithmOptionOne);
			processAlgorithmInput(fmo, temp2, algorithmOptionOne);
			processAlgorithmInput(fmo, temp1, algorithmOptionOne);
		}
		cout << "donezo brody\n";		
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
		takeUserInput(textOptionOne);		
		if(textOptionOne == 6){
			cout << "Exiting the program...\n";
			exit(EXIT_FAILURE);
		}
		cout << "\nSecond option: ";
		takeUserInput(textOptionTwo);		
		if(textOptionTwo == 6){
			cout << "Exiting the program...\n";
			exit(EXIT_FAILURE);
		}
		cout << "\nThird option: ";
		takeUserInput(textOptionThree);
		if(textOptionThree == 6){
			cout << "Exiting the program...\n";
			exit(EXIT_FAILURE);
		}

		fileManip fmo1, fmo2, fmo3;
		fstream fstreamObject;
		bool firstPass = true;


		processTextFileInput(fmo1, fstreamObject, textOptionOne);
		processTextFileInput(fmo2, fstreamObject, textOptionTwo);
		processTextFileInput(fmo3, fstreamObject, textOptionThree);

		createAlgorithmMenu(fmo1, fmo1.getVector(), firstPass);
		firstPass = !firstPass;
		createAlgorithmMenu(fmo2, fmo2.getVector(), firstPass);
		cout << "entry of third pass\n";
		createAlgorithmMenu(fmo3, fmo3.getVector(), firstPass);
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

	void createMenu::processAlgorithmInput(fileManip &fmo, vector<string> & vect, int &choice){
      std::cout << "processAlg\n";
		switch(choice){
			case 1:{
  		    	std::cout << "bubb sort\n";
				fmo.bubbleSort(vect);
				fmo.printTokenizedDataSet(vect);
				break;
			}
			case 2:{				      
				std::cout << "select sort\n";
				fmo.selectionSort(vect);
				fmo.printTokenizedDataSet(vect);
				break;
			}
			case 3:{				      
				std::cout << "insert sort\n";
				fmo.insertionSort(vect);	
				fmo.printTokenizedDataSet(vect);
				break;
			}
			case 4:{				      
				std::cout << "case4\n";
				fmo.mergeSort(fmo.getVector());
				break;
			}			
			case 5:{
				std::cout << "case5\n";
				fmo.quickSort(fmo.getVector());
				break;
			}
		}
	}

	void createMenu::processTextFileInput(fileManip &fmo, fstream &fstreamObject, int &choice){
      std::cout << "processText\n";
		switch(choice){
			case 1:{
  		    	std::cout << "readingAlice\n";
				fmo.readFromFile(fstreamObject, fmo.getAlice(), fmo.getVector());
				break;
			}
			case 2:{				      
				std::cout << "readingHomer\n";
				fmo.readFromFile(fstreamObject, fmo.getHomer(), fmo.getVector());
				break;
			}
			case 3:{				      
				std::cout << "readingHuck\n";
				fmo.readFromFile(fstreamObject, fmo.getHuckleBerryFinn(), fmo.getVector());
				break;
			}
			case 4:{				      
				std::cout << "readingLeviathan\n";
				fmo.readFromFile(fstreamObject, fmo.getLeviathan(), fmo.getVector());
				break;
			}			
			case 5:{
				std::cout << "readingMLK\n";
				fmo.readFromFile(fstreamObject, fmo.getMlkSpeech(), fmo.getVector());
				break;
			}
		}
	}