#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
	
	string holdUserInputForFileName;
	string palindrome = "A Toyota";

	cout << "bruh enter a file name: ";

	cin >> holdUserInputForFileName;

	fstream out_file;


	int counter = 0;


	// how do we open a file that does not exist on
	// your hard drive at run time of the program
	// example:
	//	if the file name does not match anything
	//	in your local folder where the source code is
	out_file.open(holdUserInputForFileName);


	if(out_file){

	//	for(int i = 0; i < 1000; i++)
		in_file >> tempString;

		// call to your clean data funciton here with string as program
		// cleanData(std::string)
		// result is a nice string that is clean
		// 	ex: std::temp = A Toyota
		
		// addbegin(temp)
		
			out_file.close();

	}else{
		cout << "youre file aint open dog\n";

	}

	return 0;
}