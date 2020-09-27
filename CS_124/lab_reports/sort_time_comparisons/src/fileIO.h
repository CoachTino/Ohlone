#ifndef FILEIO_H
#define FILEIO_H

#include <fstream>
#include <vector>

using std::string;
using std::fstream;
using std::vector;

	class fileIO: public delimeters{

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
			void printTokenizedDataSet(vector<string>);
	};

#endif