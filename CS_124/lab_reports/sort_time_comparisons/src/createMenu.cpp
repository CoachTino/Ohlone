#include <iostream>
#include <fstream>
#include <chrono>

#include "createMenu.h"
#include "fileManip.h"

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using namespace std::chrono;

	createMenu::createMenu(){

		textOptionOne = 0;
		textOptionTwo = 0;
		textOptionThree = 0;
		algorithmOptionOne = 0;
		algorithmOptionTwo = 0;		
		printOptionOne = 0;
		printOptionTwo = 0;
		repeatOption = 0;

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
		getline(cin, name);

		greetTheUser();
	}
	
	string createMenu::getUsersName(){

		return name;
	}

	void createMenu::createTextFileMenu(){

		cout << "\nPlease enter the number for three texts you want to sort." << endl;
		cout << "1: Alice's Adventures in Wonderland\n";
		cout << "2: The Odyssey\n";
		cout << "3: Adventures of Huckleberry Finn\n";
		cout << "4: Leviathan\n";
		cout << "5: Dr. King's \"I have a Dream\"\n";
		cout << "6: Quit the program.\n";

		cout << "\nYour choice: ";
		validateUserInput(textOptionOne);		
		if(textOptionOne == 6){
			cout << "Exiting the program...\n";
			exit(EXIT_FAILURE);
		}

		fileManip fmo1;
		fstream fstreamObject;
		
		processTextFileInput(fmo1, fstreamObject, textOptionOne);
		createAlgorithmMenu(fmo1, fmo1.getVector());
	}

	void createMenu::createAlgorithmMenu(fileManip & fmo, vector<string> &vect){

		cout << "\nPlease enter the number for two algorithms you want to compare run times for." << endl;
		cout << "1: Bubble Sort\n";
		cout << "2: Selection Sort\n";
		cout << "3: Insertion Sort\n";
		cout << "4: Merge Sort\n";
		cout << "5: Quick Sort\n";
		cout << "6: Quit the program.\n";

		cout << "\nFirst option: ";
		validateUserInput(algorithmOptionOne);		
		if(algorithmOptionOne == 6){
			cout << "Exiting the program...\n";
			exit(EXIT_FAILURE);
		}/*
		cout << "Second option: ";
		validateUserInput(algorithmOptionTwo);
		if(algorithmOptionTwo == 6){
			cout << "Exiting the program...\n";
			exit(EXIT_FAILURE);
		}*/
		cout << "\nGood choices! Running the algorithms now...\n\n";

		int loopCount = 0;
		do{
			vector<string> temp1(vect);
    		// get starting timepoint
    		auto start = high_resolution_clock::now(); 
    		processAlgorithmInput(fmo, temp1, algorithmOptionOne);
			// get ending timepoint 
    		auto stop = high_resolution_clock::now();
    		// Get duration. Substart timepoints to  
    		// get durarion. To cast it to proper unit 
    		// use duration cast method 
    		auto duration = duration_cast<microseconds>(stop - start); 
			cout << "Time taken by function: " << duration.count() << " microseconds" << endl;  
			loopCount++;
			if(loopCount == 3){
				vect.swap(temp1);
			}
			temp1.clear();
		}while(loopCount < 3);
		// exit(EXIT_FAILURE);
		createPrintOutMenu(fmo, vect);	
	}
			
	void createMenu::createPrintOutMenu(fileManip & fmo, vector<string> vect){

		cout << "\nPlease enter the number to select the output you'd like." << endl;
		cout << "1: Print the first 50 words of the sorted array\n";
		cout << "2: Print the last 50 words of the sorted array\n";
		cout << "3: Quit the program.\n";

		cout << "\nPrint option: ";
		validateUserInput(printOptionOne);	
		if(printOptionOne == 3){
			cout << "Exiting the program...\n";
			exit(EXIT_FAILURE);
		}else if(printOptionOne == 1){
			fmo.printFirstFiftyTokenizedDataSet(vect);
		}else if(printOptionOne == 2){
			fmo.printLastFiftyTokenizedDataSet(vect);
		}else{
			cout << "Invalid input. Exiting the program...\n";
			exit(EXIT_FAILURE);
		}
		createSearchMenu(fmo, vect);
	}

	void createMenu::createSearchMenu(fileManip &fmo, vector<string> vect){

		cout << "\n\nPlease enter a word you would like to search for, or type 1 to quit the program: ";
		validateUserInput(searchString);		
		if(searchString == "1"){
			cout << "Exiting the program...\n";
			exit(EXIT_FAILURE);
		}
		fmo.searchVector(vect, (vect.size()-1), searchString);
		repeatMenu();
	}

	void createMenu::validateUserInput(int &choice){

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

	void createMenu::validateUserInput(string &choice){

		int attempts = 1;

		cin  >> choice;
		try{
			while(cin.fail()){

				cout << "Invalid entry, try again: ";
				cin >> choice;
				attempts++;
				if(attempts >= 3){

					throw 42;
				}
			}
		}catch(int x){

			cout << "\nYou failed to enter a valid option 3 times in a row.\nExiting the program.\n";
			exit(EXIT_FAILURE);
		}
	}

	void createMenu::processAlgorithmInput(fileManip &fmo, vector<string> & vect, int &choice){
		switch(choice){
			case 1:{
  		    	// std::cout << "running bubb sort\n";
				fmo.bubbleSort(vect);
				break;
			}
			case 2:{				      
				// std::cout << "running select sort\n";
				fmo.selectionSort(vect);
				break;
			}
			case 3:{				      
				// std::cout << "running insert sort\n";
				fmo.insertionSort(vect);	
				break;
			}
			case 4:{				      
				std::cout << "running case4\n";
				fmo.mergeSort(fmo.getVector());
				break;
			}			
			case 5:{
				std::cout << "running case5\n";
				fmo.quickSort(fmo.getVector());
				break;
			}
		}
	}

	void createMenu::processTextFileInput(fileManip &fmo, fstream &fstreamObject, int &choice){
      std::cout << "processText\n";
		switch(choice){
			case 1:{
  		    	// std::cout << "readingAlice\n";
				fmo.readFromFile(fstreamObject, fmo.getAlice(), fmo.getVector());
				break;
			}
			case 2:{				      
				// std::cout << "readingHomer\n";
				fmo.readFromFile(fstreamObject, fmo.getHomer(), fmo.getVector());
				break;
			}
			case 3:{				      
				// std::cout << "readingHuck\n";
				fmo.readFromFile(fstreamObject, fmo.getHuckleBerryFinn(), fmo.getVector());
				break;
			}
			case 4:{				      
				// std::cout << "readingLeviathan\n";
				fmo.readFromFile(fstreamObject, fmo.getLeviathan(), fmo.getVector());
				break;
			}			
			case 5:{
				// std::cout << "readingMLK\n";
				fmo.readFromFile(fstreamObject, fmo.getMlkSpeech(), fmo.getVector());
				break;
			}
		}
	}

	void createMenu::repeatMenu(){

		cout << "\nPlease enter the number to start over or exit the program." << endl;
		cout << "1: Restart from the beginning.\n";
		cout << "2: Quit the program.\n";

		cout << "\nRestart option: ";
		validateUserInput(repeatOption);	
		if(repeatOption == 1){
			
			createTextFileMenu();
		}else if(repeatOption == 2){
		
			cout << "\nPeace out dude!\n";
		}
	}