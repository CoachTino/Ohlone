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
				word = tokenizeDataSet(word, doo.getMorseCode());
				word = tokenizeDataSet(word, doo.getOpeningBracket());
				word = tokenizeDataSet(word, doo.getClosingBracket());
				word = tokenizeDataSet(word, doo.getClosingParenthesis());
				word = tokenizeDataSet(word, doo.getOpeningParenthesis());
				// word = tokenizeDataSet(word, getClosingQuotationMark());
				// word = tokenizeDataSet(word, getOpeningQuotationMark());
				word = tokenizeDataSet(word, doo.getUnderscore());
				word = tokenizeDataSet(word, doo.getSemiColon());

				vect.push_back(word);
			 }

			fileObject.close();

		}else if(!fileObject){

		    cout << "Error reading file!" << endl;
		    exit(EXIT_FAILURE);
		}
		cout << "done reading file" << endl;
	}

	string fileManip::tokenizeDataSet(string& str,char delim){
	
		int tokenStart = 0; 

		string temp;
		int delimPosition = str.find(delim);

		if(delimPosition > 0){

			// extract the token
			string tok = str.substr(tokenStart, delimPosition - tokenStart);

			temp = tok;

			// move delimPosition to the next character position
			delimPosition++;

			// move tokenStart to delimPosition
			tokenStart = delimPosition;

		}else if(delimPosition == 0){

			tokenStart++;

			// extract the token
			string tok = str.substr(tokenStart, delimPosition - tokenStart);

			temp = tok;

			// move delimPosition to the next character position
			delimPosition++;

			// move tokenStart to delimPosition
			tokenStart = delimPosition;

		}else if(delimPosition == string::npos){

			//extract the token
			string tok = str.substr(tokenStart, delimPosition - tokenStart);

			temp = tok;
		}
		return temp;	
	}

	void fileManip::printTokenizedDataSet(vector<string> vect){

			for (int i = 0; i < 50; ++i){
				cout << "vector index " << i << ": " << vect[i] << endl;
			}			
	}
