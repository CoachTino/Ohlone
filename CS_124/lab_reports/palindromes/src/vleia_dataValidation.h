#ifndef DATAVALIDATION_H
#define DATAVALIDATION_H

#include "vleia_linkedList.h"

using std::string;

	class dataValidation{

		private:

		public:

			// remove anything not alphanumeric lowercase and return the string
			string removeUnwantedCharacters(string);

			// validate user input is between 1 and 3 and an int
			void validateUserInput(int &);

			// return true if a palindrome
			// pop each node from the both list
			// will return false if 1 node doesn't match
			bool checkPalindrome(linkedList &, linkedList &);
		

			// creates a stack for specific use case, to test if palindrome is valid
			void createStackFromUserInputPalindrome(linkedList &, string);		

			// creates a queue for specific use case, to test if palindrome is valid
			void createQueueFromUserInputPalindrome(linkedList &, string);

			// returns the string if not empty
			string validateStrings(string);

			// returns true of Y or y
			// else returns false
			bool validateYesOrNo(char);
	};

#endif