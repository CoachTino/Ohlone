#include <iostream>
#include <fstream>

#include "fileInputAndOutput.h"
#include "ListNode.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::fstream;
using std::ios;

	void fileInputAndOutput::setUserInputFileName(string fn){

		userInputFileName = fn;
	}

	string fileInputAndOutput::getUserInputFileName(){

		return userInputFileName;
	}

	const string fileInputAndOutput::getPalindromeSample(){

		return samplePalindromes;
	}

	const string fileInputAndOutput::getTinosCoolPalindrome(){

		return tinosSamplePalindromes;
	}

	void fileInputAndOutput::writeToFile(fileInputAndOutput &rfo, string fn){

		fstream fileObject;

		fileObject.open(fn, ios::out | ios::trunc);
		if(fileObject){

			ListNode *nodePointer;

			if(!rfo.getHead()){

	          cout << "\nThe list is empty.\n";
	          return;
	        }else{

	        	nodePointer = rfo.getHead();

	        	while(nodePointer){

	        		fileObject << nodePointer->data;
	        		fileObject << endl;

	        		nodePointer = nodePointer->next;
	        	}
			}

		}else if(!fileObject){

		    cout << "Error reading file!" << endl;
		    exit(EXIT_FAILURE);
		}
	}

	void fileInputAndOutput::readFromFile(string fn){
		
		fstream fileObject;
		string palindrome, tempLine;


		fileObject.open(fn, ios::in);
		if(fileObject){

			linkedList tempStack;
			linkedList tempQueue;

			while(getline(fileObject, palindrome)){

				tempLine = removeUnwantedCharacters(palindrome);
				tempLine = stringToLowerCase(palindrome);
				if(tempLine[0] <= 32){
					continue;
				}
				if(checkPalindrome(tempStack, tempQueue)){
					addNodeInAlphabeticalOrder(palindrome);

				}

			}
			fileObject.close();
		}else if(!fileObject){

		    cout << "Error reading file!" << endl;
		    exit(EXIT_FAILURE);
		}
	}