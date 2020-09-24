#include <iostream>
#include <string>
#include <vector>
#include "split.h"
using namespace std;

	int main(){

			// strings to tokenize

			string str1 = "one two three four";
			string str2 = "10:20:30:40:50:";
			string str3 = "a/b/c/d/e/f";

			split so;

			// vector to hold the tokens
			vector<string> tokens;

			// tokenize str1, using ' ' as the delimiter
			so.testSplit(str1, ' ', tokens);

			for(auto e : tokens){
				cout << e << " ";
			}
			cout << endl;
			tokens.clear();

			// tokenize str2, using ' ' as the delimiter
			so.testSplit(str2, ':', tokens);

			for(auto e : tokens){
				cout << e << " ";
			}
			cout << endl;
			tokens.clear();

			// tokenize str3, using ' ' as the delimiter
			so.testSplit(str3, '/', tokens);

			for(auto e : tokens){
				cout << e << " ";
			}
			cout << endl;
			tokens.clear();

			
		return 0;
	}