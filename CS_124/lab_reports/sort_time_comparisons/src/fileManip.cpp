#include <iostream>

#include "delimeters.h"
#include "sortingLib.h"
#include "fileManip.h"
#include <fstream>
#include <vector>

using std::cout;
using std::vector;
using std::endl;
using std::fstream;
using std::string;
using std::ios;
using std::getline;

	vector<string>& fileManip::getVector(){

		return tokenizedDataSet;
	}

	void fileManip::setBufferSize(fstream &fileObject, string fileName){

		fileObject.open(fileName, ios::in);
		if(fileObject){

			string sbuffer;
			int i = 0;

			while (fileObject >> sbuffer){

				i++;
			}
			bufferSize = i;
			fileObject.close();
		}else if(!fileObject){

		    cout << "Error reading file!" << endl;
		    exit(EXIT_FAILURE);
		}
	}

	int fileManip::getBufferSize(){

		return bufferSize;
	}

	void fileManip::writeToFile(fstream &file, string array[], string fileName){

		file.open(fileName, ios::out);
		if(file){
			int i = 0;
			while(file << array[i]){

				i++;
			}
			file.close();
		}else if (!file){

		    cout << "Error writing file!" << endl;
		    exit(EXIT_FAILURE);
		}
	}

	void fileManip::readFromFile(fstream &fileObject, string fileName, vector<string>& vect){

		setFileName(fileName);
		delimeters doo;
		fileObject.open(fileName, ios::in);
		if(fileObject){

			string word;
			while (fileObject >> word){
				
				word = tokenizeDataSet(word, doo.getHyphen());
				word = tokenizeDataSet(word, doo.getComma());
				word = tokenizeDataSet(word, doo.getQuotationMark());
				word = tokenizeDataSet(word, doo.getApostrophe());
				word = tokenizeDataSet(word, doo.getExclamationPoint());
				word = tokenizeDataSet(word, doo.getColon());
				word = tokenizeDataSet(word, doo.getPeriod());
				word = tokenizeDataSet(word, doo.getPercent());
				word = tokenizeDataSet(word, doo.getOpeningBracket());
				word = tokenizeDataSet(word, doo.getClosingBracket());
				word = tokenizeDataSet(word, doo.getClosingParenthesis());
				word = tokenizeDataSet(word, doo.getOpeningParenthesis());
			    word = tokenizeDataSet(word, doo.getAsterisk());
				word = tokenizeDataSet(word, doo.getPoundSign());
				word = tokenizeDataSet(word, doo.getUnderscore());
				word = tokenizeDataSet(word, doo.getSemiColon());
				word = tokenizeDataSet(word, doo.getDollarSign());

				if(word == "YEEEEET"){		
					vect.push_back(word);
					vect.pop_back();
				}else if(word[0] < 48){
					vect.push_back(word);
					vect.pop_back();
				}else{
					vect.push_back(word);
				}
			 }
			fileObject.close();

		}else if(!fileObject){

		    cout << "Error reading file!" << endl;
		    exit(EXIT_FAILURE);
		}
	}

	string fileManip::tokenizeDataSet(string& str,char delim){
		bool allTheSame = false;
		string temp;

		for(uint i = 0; i < str.length(); i++){
    		if(str[i] == delim){
        		allTheSame = true;
        	}
        	else{
        		allTheSame = false;
        	}
    	}
		if(allTheSame){
			temp = "YEEEEET";
			return temp;
		}else if(!allTheSame){

			int tokenStart = 0; 
			int delimPosition = str.find(delim);
			delimPosition = str.find(delim);
			string tok = str.substr(tokenStart, delimPosition - tokenStart);
			temp = tok;
			delimPosition++;
			tokenStart = delimPosition;
		}
		return temp;	
	}

	void fileManip::printFirstFiftyTokenizedDataSet(vector<string> vect){

		for (int i = 0; i < 50; i++){//vect.size(); i++){
			cout  << vect[i] << " ";
		}			
	}
	void fileManip::printLastFiftyTokenizedDataSet(vector<string> vect){

		for(int h = (vect.size() - 1); h > (vect.size() - 50); h--){
			cout  << vect[h] << " ";
		}
	}

	void fileManip::searchVector(vector<string> vect, int size, string key){

		int first = 0;
		int last = size - 1;
		int mid;
		bool found = false;

		while(!found && first <= last){

			mid = (first + last) / 2;
			if(vect[mid] == key){

				found = true;
			}else if(vect[mid] > key){

				last = mid -1;
			}else{

				first = mid + 1;
			}
		}
		if (found){

			cout << key << " was found in the data set!\n";
		}
		cout << key << " was not found in the data set. :(\n";
	}