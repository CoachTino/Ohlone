#include <iostream>
#include <fstream>
#include <string>

#include "textFileNames.h"
#include "delimeters.h"
#include "sortingLib.h"
#include "fileIO.h"
#include "createMenu.h"

using std::cout;
//using std::endl;
using std::fstream;


int main(){

	fileIO fileInputOutputObject;
	sortingLib sortingLibObject;
	fstream fstreamObject;
	textFileNames textFileNamesObject;
	delimeters delimeterObject;
	createMenu menuObject;




	fileInputOutputObject.setBufferSize(fstreamObject, textFileNamesObject.getAlice());
	fileInputOutputObject.readFromFile(fstreamObject, textFileNamesObject.getAlice(), fileInputOutputObject.getVector());

	//so.insertionSort(fo.tempData, fo.getBufferSize());
	//for(int i = 0; i < 5; i++){

	//	cout << so.testArray[i] << endl;
	//}
	fileInputOutputObject.printTokenizedDataSet(fileInputOutputObject.getVector());

	return 0;
}