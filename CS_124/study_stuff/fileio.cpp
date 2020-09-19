// practice assignment to get a refresher on reading and writing to files

#include <iostream>
#include <fstream>
#include <string>



	void writeToFile(std::fstream &, int* , const int&);
	void readFromFile(std::fstream &, int*, const int&);

	int main(){

		std::cout << "\nLet's get some file i/o practice.\n";

		const int SIZE = 4;
		int stuff[SIZE] = {255};
		int* pointer = stuff;

		std::fstream fo;

		writeToFile(fo, stuff, SIZE);
		readFromFile(fo, stuff, SIZE);


		return 0;
	}

	void writeToFile(std::fstream &file, int* arrPointer, const int& x){

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

	void readFromFile(std::fstream &file, int* arrPointer, const int& x){

		file.open("data.txt", std::ios::in | std::ios::out);
		if(file){

			// create a buffer
			int* buffer = new int[x];

			for (int i = 0; i < x; ++i){

				file >> buffer[i];
				//std::cout << *buffer << " ";
			}

			std::cout << std::endl;

			delete[] buffer;


		}else if(!file){

		    std::cout << "Error reading file!" << std::endl;
		    exit(EXIT_FAILURE);
		}
	}

