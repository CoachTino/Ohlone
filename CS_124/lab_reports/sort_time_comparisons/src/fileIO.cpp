#include <iostream>

#include "delimeters.h"
#include "fileIO.h"
#include <fstream>
#include <vector>

using std::cout;
using std::vector;
using std::endl;
using std::fstream;
using std::string;
using std::ios;
using std::getline;

	vector<string>& fileIO::getVector(){

		return tokenizedDataSet;
	}

	void fileIO::setBufferSize(fstream &fileObject, string fileName){

		fileObject.open(fileName, ios::in);
		if(fileObject){

			string sbuffer;
			int i = 0;

			while (fileObject >> sbuffer){

				i++;
			}
			bufferSize = i;
			cout << i << endl;
			fileObject.close();
		}else if(!fileObject){

		    cout << "Error reading file!" << endl;
		    exit(EXIT_FAILURE);
		}
	}
	
	int fileIO::getBufferSize(){

		return bufferSize;
	}

	void fileIO::writeToFile(fstream &file, string array[], string fileName){

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

	void fileIO::readFromFile(fstream &fileObject, string fileName, vector<string>& vect){

		fileObject.open(fileName, ios::in);
		if(fileObject){

			string word;

			while (fileObject >> word){
				
				word = tokenizeDataSet(word, getHyphen());
				word = tokenizeDataSet(word, getComma());
				word = tokenizeDataSet(word, getQuotationMark());
				word = tokenizeDataSet(word, getApostrophe());
				word = tokenizeDataSet(word, getExclamationPoint());
				word = tokenizeDataSet(word, getColon());
				word = tokenizeDataSet(word, getPeriod());
				word = tokenizeDataSet(word, getMorseCode());
				word = tokenizeDataSet(word, getOpeningBracket());
				word = tokenizeDataSet(word, getClosingBracket());
				word = tokenizeDataSet(word, getClosingParenthesis());
				word = tokenizeDataSet(word, getOpeningParenthesis());
				// word = tokenizeDataSet(word, getClosingQuotationMark());
				// word = tokenizeDataSet(word, getOpeningQuotationMark());
				word = tokenizeDataSet(word, getUnderscore());
				word = tokenizeDataSet(word, getSemiColon());
				
				//list[i] = word;

				vect.push_back(word);
				//cout << word << endl;	//debug printout
			 
			 }

			fileObject.close();

		}else if(!fileObject){

		    cout << "Error reading file!" << endl;
		    exit(EXIT_FAILURE);
		}
		cout << "done reading file" << endl;
	}

	string fileIO::tokenizeDataSet(string& str,char delim){
	
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

	void fileIO::printTokenizedDataSet(vector<string> vect){
	
			//for (int i = 0; i < getBufferSize(); ++i){
			//	cout << "array index " << i << ": " << tempData[i] << endl;
			//}

			for (int i = 0; i < vect.size(); ++i){
				cout << "vector index " << i << ": " << vect[i] << endl;
			}			
	}
