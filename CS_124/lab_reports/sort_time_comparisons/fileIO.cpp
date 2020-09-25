#include "fileIO.h"
#include <iostream>
#include <fstream>
#include <vector>

using std::cout;
using std::vector;
using std::endl;
using std::fstream;
using std::string;
using std::ios;
using std::getline;

	const string fileIO::getAlice(){

		return alice;
	}

	const string fileIO::getTestData(){

		return testData;
	}

	const string fileIO::getHomer(){

		return homer;
	}
	
	const string fileIO::getHuckleBerryFinn(){

		return huckleBerryFinn;
	}

	const string fileIO::getLeviathan(){

		return leviathan;
	}

	const string fileIO::getMlkSpeech(){

		return mlkDream;
	}

	const char fileIO::getHyphen(){

		return hyphen;
	}

	const char fileIO::getQuotationMark(){

		return quotationMark;
	}

	const char fileIO::getExclamationPoint(){

		return exclamationPoint;
	}

	const char fileIO::getSpace(){

		return space;
	}

	const char fileIO::getColon(){

		return colon;
	}

	const char fileIO::getPeriod(){

		return period;
	}

	const char fileIO::getComma(){

		return comma;
	}

	const char fileIO::getQuestionMark(){

		return questionMark;
	}

	const char fileIO::getApostrophe(){

		return apostrophe;
	}

	const char fileIO::getMorseCode(){

		return morseCode;
	}

	const char fileIO::getClosingBracket(){

		return closingBracket;
	}
	
	const char fileIO::getOpeningBracket(){

		return openingBracket;
	}

	const char fileIO::getClosingParenthesis(){

		return closingParenthesis;
	}
	
	const char fileIO::getOpeningParenthesis(){

		return openingParenthesis;
	}

	vector<string> fileIO::getVector(){

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

			for (int i = 0; i < 5; ++i){

				file << array[i] << "\n";
			}
			file.close();
		}else if (!file){

		    cout << "Error writing file!" << endl;
		    exit(EXIT_FAILURE);
		}
	}

	void fileIO::readFromFile(fstream &fileObject, string fileName, vector<string> &vect){

		fileObject.open(fileName, ios::in);
		if(fileObject){


			string word;
			string* sbuffer = new string[getBufferSize()];

			int i = 0;
			while (fileObject >> word){

				sbuffer[i] = word;
				sbuffer[i] = tokenizeDataSet(sbuffer[i], getHyphen(), i);
				sbuffer[i] = tokenizeDataSet(sbuffer[i], getComma(), i);
				sbuffer[i] = tokenizeDataSet(sbuffer[i], getQuotationMark(), i);
				sbuffer[i] = tokenizeDataSet(sbuffer[i], getApostrophe(), i);
				sbuffer[i] = tokenizeDataSet(sbuffer[i], getExclamationPoint(), i);
				sbuffer[i] = tokenizeDataSet(sbuffer[i], getColon(), i);
				sbuffer[i] = tokenizeDataSet(sbuffer[i], getPeriod(), i);
				sbuffer[i] = tokenizeDataSet(sbuffer[i], getMorseCode(), i);
				sbuffer[i] = tokenizeDataSet(sbuffer[i], getOpeningBracket(), i);
				sbuffer[i] = tokenizeDataSet(sbuffer[i], getClosingBracket(), i);
				sbuffer[i] = tokenizeDataSet(sbuffer[i], getClosingParenthesis(), i);
				sbuffer[i] = tokenizeDataSet(sbuffer[i], getOpeningParenthesis(), i);
				tempData[i] = sbuffer[i];
				//vect.push_back(sbuffer[i]);
				//cout << sbuffer[i] << endl;	//debug printout
				i++;
			}
			fileObject.close();

		}else if(!fileObject){

		    cout << "Error reading file!" << endl;
		    exit(EXIT_FAILURE);
		}
	}

	string fileIO::tokenizeDataSet(string& str,char delim, int h){
	
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

	void fileIO::printTokenizedDataSet(vector<string> &vect){
	
			for (int i = 0; i < vect.size(); ++i){
				cout << "index " << i << ": " << vect[i] << endl;
			}
	}
