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

	//vector<string> fileIO::getVector(){

	//	return tokenizedDataSet;
	//}

	void fileIO::printTokenizedDataSet(){
		for (int i = 0; i < tokenizedDataSet.size(); ++i){
			cout <<tokenizedDataSet.at(i) << endl;
		}
	}

	void fileIO::readFromFile(fstream &fileObject, string fileName, string array[]){

		fileObject.open(fileName, ios::in | ios::out);
		if(fileObject){

			vector<string> vbuffer;
			string sbuffer;
			int i = 0;
			while (!fileObject.eof()){

				fileObject >> sbuffer;
				fileObject >> tempData[i];
				// tokenizeDataSet(sbuffer, vbuffer, '!');
				// tokenizeDataSet(sbuffer, vbuffer, ',');
				// tokenizeDataSet(sbuffer, vbuffer, '"');
				vbuffer.push_back(sbuffer);
				i++;
				//vbuffer.swap(tokenizedDataSet);
			//	vbuffer.clear();
				//cout << vbuffer.at(i) << endl;	//debug printout
			}
			//cout << vbuffer.size() << endl;		//debug printout

//debug printout 
/*
			for (int h = 0; h < vbuffer.size(); ++h){

				//cout << vbuffer[h] << endl;
				cout << tempData[h] << endl;
			}
*/
			fileObject.close();

		}else if(!fileObject){

		    cout << "Error reading file!" << endl;
		    exit(EXIT_FAILURE);
		}
	}

	void fileIO::tokenizeDataSet(string& str, vector<string>& vect, char delim){
	//do
		int tokenStart = 0; // starting pos of the next token

		// find the first occurrence of the delimeiter
		int delimPosition = 0;
		delimPosition = str.find(delim);

		// while we havent run out of delimiters...
		//while(delimPosition != string::npos){
		if(delimPosition > 0){

			// extract the token
			string tok = str.substr(tokenStart, delimPosition - tokenStart);

			// push the token onto the tokens vector
			vect.push_back(tok);
			// move delimPosition to the next character position
			delimPosition++;

			// move tokenStart to delimPosition
			tokenStart = delimPosition;

			}else if(delimPosition == 0){

				tokenStart++;

				// extract the token
				string tok = str.substr(tokenStart, delimPosition - tokenStart);

				// push the token onto the tokens vector			
				vect.push_back(tok);

				// move delimPosition to the next character position
				delimPosition++;

				// move tokenStart to delimPosition
				tokenStart = delimPosition;

			}else if(delimPosition == string::npos){

				//extract the token
				string tok = str.substr(tokenStart, delimPosition - tokenStart);

				// push the token onto the vector			
			vect.push_back(tok);
			}
		//while();	
		//}
	}

