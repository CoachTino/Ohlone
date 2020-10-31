#ifndef FILEINPUTANDOUTPUT_H
#define FILEINPUTANDOUTPUT_H


// needed header files
#include "vleia_linkedList.h"
#include "vleia_dataValidation.h"

// makes my life easier
using std::string;

	// fileInputAndOutput inherits linkedList and dataValidation function members and attributes
	class fileInputAndOutput: public linkedList, public dataValidation{

		private:

			// hardcoded file names
			const string samplePalindromes = "PalindromeSamples.txt";
			const string tinosSamplePalindromes = "PalindromeTest2.txt";
			
			// string to store user input
			string userInputFileName;

		public:

			// sets file name via user input
			void setUserInputFileName(string);
	
			// return UserInputFileName
			string getUserInputFileName();

			// returns hardcoded file name
			const string getPalindromeSample();

			// returns hardcoded file name
			const string getTinosCoolPalindrome();

			// write the palindromes from memory to a file that the user named
			void writeToFile(fileInputAndOutput &, string);

			// read the contents of the file into memory and test if it's a palindrome
			bool readFromFile(string);

	};

#endif