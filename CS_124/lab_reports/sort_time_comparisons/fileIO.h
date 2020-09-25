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

		const char hyphen = '-';
		const char quotationMark = '"';
		const char exclamationPoint = '!';
		const char space = ' ';
		const char period = '.';
		const char comma = ',';
		const char questionMark = '?';
		const char apostrophe = '\'';
		const char closingBracket = ']';
		const char openingBracket = '[';
		const char colon = ':';
		const char morseCode = '-';
		const char closingParenthesis = ')';
		const char openingParenthesis = '(';

		int bufferSize;
		vector<string> tokenizedDataSet;
	
	public:

		const string getAlice();
		const string getTestData();
		const string getHomer();
		const string getHuckleBerryFinn();
		const string getLeviathan();
		const string getMlkSpeech();

		const char getHyphen();
		const char getQuotationMark();
		const char getExclamationPoint();
		const char getSpace();
		const char getColon();
		const char getMorseCode();
		const char getPeriod();
		const char getComma();
		const char getQuestionMark();
		const char getApostrophe();
		const char getClosingBracket();
		const char getOpeningBracket();
		const char getClosingParenthesis();
		const char getOpeningParenthesis();

		string tempData[1589];		
		vector<string> asfd;


		vector<string> getVector();
		void setBufferSize(fstream &, const string);
		int getBufferSize();
		void writeToFile(fstream &, string [], string);
		void readFromFile(fstream &, const string, vector<string> &vect);
		string tokenizeDataSet(string&, char, int);
		void printTokenizedDataSet(vector<string> &);
};

#endif