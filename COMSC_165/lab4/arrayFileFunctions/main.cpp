#include "FileFunction.h"
#include <iostream>
#include <fstream>

using namespace std;

    int main(){

        FileFunction ffo;
        fstream fileObject;
        ffo.arrayToFile(fileObject, ffo.arrayPointer, ffo.arraySize);
        ffo.displayArrayContents1(ffo.arrayPointer, ffo.arraySize);
        ffo.fileToArray(fileObject, ffo.outputFromFile, ffo.arraySize);
        ffo.displayArrayContents2(ffo.outputFromFile, ffo.arraySize);
        delete [] ffo.arrayPointer;
        delete [] ffo.outputFromFile;

        return 0;
    }
