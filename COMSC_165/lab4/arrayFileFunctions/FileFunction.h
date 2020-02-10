#ifndef FILEFUNCTION_H
#define FILEFUNCTION_H
#include <fstream>

class FileFunction
{
    public:
        char* arrayPointer; //used to initialize file
        char* outputFromFile; //used to hold contents from file
    	const int arraySize = 5;

        FileFunction(); //constructor use for initialization

    	// write array contents to file
        void arrayToFile(std::fstream &, char *, int);

        // read file contents to array
        void fileToArray(std::fstream &, char *, int);

        // display contents of the array
        //displays array before being written to file
        void displayArrayContents1(char *, int);

        //displays newly created array that gets contents from the file
        void displayArrayContents2(char *, int);

        char* getArray();
};

#endif // FILEFUNCTION_H
