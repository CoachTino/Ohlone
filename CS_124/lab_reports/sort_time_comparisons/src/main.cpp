#include <iostream>
#include <fstream>
#include <string>

#include "textFileNames.h"
#include "delimeters.h"
#include "sortingLib.h"
#include "fileManip.h"
#include "createMenu.h"

using std::cout;
using std::endl;
using std::fstream;


int main(){

	createMenu mo;
		fileManip fmo;

	// fmo.readFromFile(fstreamObject, fmo.getMlkSpeech(), fmo.getVector());

	// fmo.bubbleSort(fmo.getVector());
	// fmo.selectionSort(fmo.getVector());
	// fmo.insertionSort(fmo.getVector());
	//for(int i = 0; i < 5; i++){

	//	cout << so.testArray[i] << endl;
	//}
	 //fmo.printTokenizedDataSet(fmo.getVector());

	return 0;
}