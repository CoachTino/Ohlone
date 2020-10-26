#ifndef DATAVALIDATION_H
#define DATAVALIDATION_H

#include "linkedList.h"

using std::string;

	class dataValidation{

		private:

		public:

			string stringToLowerCase(string);
			string removeUnwantedCharacters(string);
			void validateUserInput(int &);
			bool checkPalindrome(linkedList &, linkedList &);

	};

#endif