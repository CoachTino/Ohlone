#ifndef FILEIO_H
#define FILEIO_H

#include <fstream>
#include <vector>

using std::string;
using std::fstream;
using std::vector;

class fileIO{

	private:

		const string alice = "alice.txt";
		const string testData = "data.txt";
		const string homer = "homer.txt";
		const string huckleBerryFinn= "huckleberry_finn.txt";
		const string leviathan= "leviathan.txt";
		const string mlkDream= "mlk_dream.txt";

		int bufferSize;
		vector<string> tokenizedDataSet;
	
	public:

		const string getAlice();
		const string getTestData();
		const string getHomer();
		const string getHuckleBerryFinn();
		const string getLeviathan();
		const string getMlkSpeech();
		//vector<string> getVector();

		void setBufferSize(fstream &, const string);
		int getBufferSize();
		void writeToFile(fstream &, string [], string);
		void readFromFile(fstream &, const string);
		void tokenizeDataSet(string& );
		void printTokenizedDataSet();
};

#endif