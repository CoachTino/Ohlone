#include "FileFunction.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

    /*************************************************************
    * FileFunction constructor initializes two dynamic arrays    *
    **************************************************************/
    FileFunction::FileFunction() {
		arrayPointer =  new char[5]{'a','b','c','d','e'};
		outputFromFile =  new char[5]{'e','d','c','b','a'};
    }

    /*************************************************************
    * arrayToFile function accepts fstream object, array and int *
    * as arguments then opens the file in binary mode and        *
    * writes the contents of the array to the file               *
    **************************************************************/
    void FileFunction::arrayToFile(fstream &fileObject, char *arr, int arrSize){

    	// open the file for output in binary mode
    	fileObject.open("test.txt", ios::out | ios::binary);

    	// write the contents of the array to the file
    	cout << "writing array to file.\n";
    	fileObject.write(arrayPointer, arrSize);

    	// close the file
    	fileObject.close();
    }

    /*************************************************************
    * fileToArray function accepts fstream object, array, int    *
    * as argumentsthen opens the file in binary mode and         *
    * reads the contents of the file to the array                *
    **************************************************************/
    void FileFunction::fileToArray(fstream &fileObject, char *arr, int arrSize){

    	// open the file for input in binary mode
    	fileObject.open("test.txt", ios::in | ios::binary);

    	// read the contents of the file to the array
    	cout << "reading file to array/memory.\n";
    	fileObject.read(arr, arrSize);

    	// close the file
    	fileObject.close();
    }

    /*************************************************************
    * displayArrayContents accepts an array/int as an argument   *
    * then prints the contents of the array to the console       *
    **************************************************************/
    void FileFunction::displayArrayContents1(char *arr, int arrSize){
        if (arr == arrayPointer) cout << "TRUE" << endl;
    	for (int i = 0; i < arrSize; ++i){
    		cout << arrayPointer[i] << " ";
    	}
    	cout << endl;
    }

    void FileFunction::displayArrayContents2(char *arr, int arrSize){
        if (arr == outputFromFile) cout << "TRUE" << endl;
    	for (int i = 0; i < arrSize; ++i){
    		cout << outputFromFile[i] << " ";
    	}
    	cout << endl;
    }
