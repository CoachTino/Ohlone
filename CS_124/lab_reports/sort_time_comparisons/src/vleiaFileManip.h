#ifndef VLEIAFILEMANIP_H
#define VLEIAFILEMANIP_H

#include "vleiaSortingLib.h"
#include "vleiaTextFileNames.h"

#include <fstream>
#include <vector>

using std::string;
using std::fstream;
using std::vector;

	class vleiaFileManip: public vleiaTextFileNames, public vleiaSortingLib{

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