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

	so.insertionSort(so.testArray);
        
    cout << "\nDebug: in main after sort: \n";
	for(int i  = 0; i < 5; i++){

		cout << so.testArrayNew[i] << " ";
	}
	cout << endl;	



	cout << "\nLet's get some file i/o practice.\n";


	//fo.writeToFile(fos, so.testArray);
	fo.readFromFile(fos,fo.getTestData(), so.testArrayNew);


	return 0;
}