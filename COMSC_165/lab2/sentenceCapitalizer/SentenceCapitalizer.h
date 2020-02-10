#ifndef SENTENCECAPITALIZER_H
#define SENTENCECAPITALIZER_H


class SentenceCapitalizer
{
    public:

    	int SIZE = 80;
		int minIndex = 0;
		char unconvertedSentence[];
        
        SentenceCapitalizer();
        void getUserInput();
		void displayAndConvertSentence(char *);
};

#endif // SENTENCECAPITALIZER_H
