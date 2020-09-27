#ifndef DELIMETERS_H
#define DELIMETERS_H

	class delimeters{

		private:

			const char hyphen = '-';
			const char quotationMark = '"';
			//const char openingQuotationMark = '“';
			//const char closingQuotationMark = '”';
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
			const char underScore = '_';
			const char semiColon = ';';
		
		public:

			const char getHyphen();
			const char getQuotationMark();
			//const char getOpeningQuotationMark();
			//const char getClosingQuotationMark();
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
			const char getUnderscore();
			const char getSemiColon();
	};

#endif