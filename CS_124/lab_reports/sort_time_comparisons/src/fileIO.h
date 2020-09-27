#ifndef FILEIO_H
#define FILEIO_H

#include <fstream>
#include <vector>

using std::string;
using std::fstream;
using std::vector;

	class fileIO{

		private:

			int bufferSize;
			vector<string> tokenizedDataSet;

			// tokenizedDataSet.push_back("asdfasdf");
			// tokenizedDataSet[0] = "asdfasdf"; 
					// tokenizedDataSet.push_back("qwerqwer");
			// tokenizedDataSet[1] = "qwerqwer"; 
			// tokenizedDataSet.pop_back();
				// tokenizedDataSet[0] = "asdfasdf"; 

		public:

			vector<string>& getVector();
			void setBufferSize(fstream &, const string);
			int getBufferSize();
			void writeToFile(fstream &, string [], string);
			void readFromFile(fstream &, const string, vector<string>& vect);
			string tokenizeDataSet(string&, char);
			void printTokenizedDataSet(vector<string>);
	};

#endif