#include <iostream>
#include <string>
#include <vector>
#include "split.h"
using namespace std;

	void split::testSplit(string& str, char delim, vector<string>& tokens){

		int tokenStart = 0; // startin pos of the next token

		// find the first occurrence of the delimeiter
		int delimPosition = str.find(delim);

		// while we havent run out of delimiters...
		while(delimPosition != string::npos){

			// extract the token
			string tok = str.substr(tokenStart, delimPosition - tokenStart);

			// push the token onto the tokens vector
			tokens.push_back(tok);

			// move delimPosition to the next character position
			delimPosition++;

			// move tokenStart to delimPosition
			tokenStart = delimPosition;

			// if no more delimiters, extract the last token
			if(delimPosition == string::npos){

				//extract the token
				string tok = str.substr(tokenStart, delimPosition - tokenStart);

				// push the token onto the vector
				tokens.push_back(tok);
			}
		}
	}
