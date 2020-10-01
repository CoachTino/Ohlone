#ifndef FILEMANIP_H
#define FILEMANIP_H

#include "sortingLib.h"
#include "textFileNames.h"

#include <fstream>
#include <vector>

using std::string;
using std::fstream;
using std::vector;

	class fileManip: public textFileNames, public sortingLib{

		private:

			int bufferSize;
			vector<string> tokenizedDataSet;

		public:

			vector<string>& getVector();
			void setBufferSize(fstream &, const string);
			int getBufferSize();
			void writeToFile(fstream &, string [], string);
			void readFromFile(fstream &, const string, vector<string>& vect);
			string tokenizeDataSet(string&, char);
			void printFirstFiftyTokenizedDataSet(vector<string>);
			void printLastFiftyTokenizedDataSet(vector<string>);
			void searchVector(vector<string>, int, string);
	};

#endif