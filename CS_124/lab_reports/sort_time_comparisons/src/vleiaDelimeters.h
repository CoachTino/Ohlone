#ifndef VLEIADELIMETERS_H
#define VLEIADELIMETERS_H

	class vleiaDelimeters{

		private:

			const char hyphen = '-';
			const char quotationMark = '"';
			const char asterisk = '*';
			const char poundSign = '#';
			const char exclamationPoint = '!';
			const char space = ' ';
			const char period = '.';
			const char comma = ',';
			const char questionMark = '?';
			const char apostrophe = '\'';
			const char closingBracket = ']';
			const char openingBracket = '[';
			const char colon = ':';
			const char percent = '%';
			const char closingParenthesis = ')';
			const char openingParenthesis = '(';
			const char underScore = '_';
			const char semiColon = ';';
			const char dollarSign = '$';
		
		public:

			const char getHyphen();
			const char getQuotationMark();
			const char getAsterisk();
			const char getPoundSign();
			const char getExclamationPoint();
			const char getSpace();
			const char getColon();
			const char getPercent();
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
			const char getDollarSign();
	};

#endif