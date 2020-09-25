#include <iostream>
#include "sortingLib.h"
#include "fileIO.h"
using std::cout;
using std::endl;
using std::fstream;


int main(){

	fileIO fo;
	sortingLib so;
	fstream fos;

	fo.setBufferSize(fos, fo.getMlkSpeech());
	fo.readFromFile(fos, fo.getMlkSpeech(), fo.asfd);
	//so.selectionSort(fo.tempData);

	fo.printTokenizedDataSet(fo.asfd);


	return 0;
}