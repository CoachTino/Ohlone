#ifndef FILEINPUTANDOUTPUT_H
#define FILEINPUTANDOUTPUT_H

#include "linkedList.h"
#include "dataValidation.h"

using std::string;

	class fileInputAndOutput: public linkedList, public dataValidation{

		private:

			const string samplePalindromes = "PalindromeSamples.txt";
			const string tinosSamplePalindromes = "tinosCoolPalindromes.txt";
			string userInputFileName;

		public:

			void setUserInputFileName(string);
			string getUserInputFileName();

			const string getPalindromeSample();
			const string getTinosCoolPalindrome();

			void writeToFile(fileInputAndOutput &, string);
			bool readFromFile(string);

	};

#endif