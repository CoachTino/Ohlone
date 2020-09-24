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


	void fileIO::setBufferSize(fstream &fileObject, string fileName){

		fileObject.open(fileName, ios::in);
		if(fileObject){

			string sbuffer;
			int i = 0;

			while (!fileObject.eof()){

				fileObject >> sbuffer;
				i++;
			}
			bufferSize = i;

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

	void fileIO::readFromFile(fstream &fileObject, string fileName){

		fileObject.open(fileName, ios::in);
		if(fileObject){

			vector<string> vbuffer;
			string word;
			string* buffer = new string[getBufferSize()];

			int i = 0;
			while (!fileObject.eof()){

				fileObject >> buffer[i];
				//cout << buffer[i] << endl;	//debug printout
				i++;
			}

			fileObject.close();

		}else if(!fileObject){

		    cout << "Error reading file!" << endl;
		    exit(EXIT_FAILURE);
		}
	}

	void fileIO::tokenizeDataSet(string& str){
	
		// find the first occurrence of the delimeiter
		int delimPosition = 0;
		do{
			delimPosition = 0;
			int tokenStart = 0; // starting pos of the next token

			delimPosition = str.find(',');

			// while we havent run out of delimiters...
			//while(delimPosition != string::npos){
			if(delimPosition > 0){

				// extract the token
				string tok = str.substr(tokenStart, delimPosition - tokenStart);

				// push the token onto the tokens vector
				//vect.push_back(tok);



				// move delimPosition to the next character position
				delimPosition++;

				// move tokenStart to delimPosition
				tokenStart = delimPosition;

			}else if(delimPosition == 0){

				tokenStart++;

				// extract the token
				string tok = str.substr(tokenStart, delimPosition - tokenStart);

				// push the token onto the tokens vector			
				//vect.push_back(tok);

				// move delimPosition to the next character position
				delimPosition++;

				// move tokenStart to delimPosition
				tokenStart = delimPosition;

			}else if(delimPosition == string::npos){

				//extract the token
				string tok = str.substr(tokenStart, delimPosition - tokenStart);

				// push the token onto the vector			
				//vect.push_back(tok);
			}
		}while(delimPosition > 0);	
	}

	void fileIO::printTokenizedDataSet(){
	
		//for (int i = 0; i < tokenizedDataSet.size(); ++i){
		//	cout <<tokenizedDataSet.at(i) << endl;
		//}
	}
