#include "SentenceCapitalizer.h"
#include <iostream>
#include <cctype>

using namespace std;

int main(){

	SentenceCapitalizer sco;

	sco.getUserInput();
	sco.displayAndConvertSentence(sco.unconvertedSentence);

    return 0;
}
