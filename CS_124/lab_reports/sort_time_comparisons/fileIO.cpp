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

	const string fileIO::getMlkDream(){

		return mlkDream;
	}

	void fileIO::writeToFile(fstream &file, string array[]){

		file.open("data.txt", ios::in | ios::out);
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

	void fileIO::readFromFile(fstream &fileObject, string fileName, string array[]){

		fileObject.open(fileName, ios::in | ios::out);
		if(fileObject){

			vector<string> vbuffer;
			string buffer;
			while (!fileObject.eof()){

				fileObject >> buffer;
				cout << buffer << endl;
				vbuffer.push_back(buffer);
			}
			cout << vbuffer.size() << endl;
			//tokenizeDataSet(vbuffer);
			fileObject.close();

		}else if(!fileObject){

		    cout << "Error reading file!" << endl;
		    exit(EXIT_FAILURE);
		}
	}

	void fileIO::tokenizeDataSet(vector<string> vect){


	}

