// practice assignment to get a refresher on reading and writing to files

#include "fileIO.h"
#include <iostream>
#include <fstream>
#include <string>


	void fileIO::writeToFile(std::fstream &file, int* arrPointer, const int& x){

		file.open("data.txt", std::ios::in | std::ios::out);
		if(file){

			for (int i = 0; i < x; ++i){
				
				file << *arrPointer << "\t";
			}
			file.close();
		}else if (!file){

		    std::cout << "Error writing file!" << std::endl;
		    exit(EXIT_FAILURE);
		}
	}

	void fileIO::readFromFile(std::fstream &file, int* arrPointer, const int& x){

		file.open("data.txt", std::ios::in | std::ios::out);
		if(file){

			// create a buffer
			int* buffer = new int[x];
/*
			for (int i = 0; i < x; ++i){

				file >> buffer[i];
				//std::cout << *buffer << " ";
			}
*/

			file.seekg(0, file.end);
			int fileLength = file.tellg();
			file.seekg(0, file.beg);

			
			std::cout << std::endl;

			delete[] buffer;


		}else if(!file){

		    std::cout << "Error reading file!" << std::endl;
		    exit(EXIT_FAILURE);
		}
	}

