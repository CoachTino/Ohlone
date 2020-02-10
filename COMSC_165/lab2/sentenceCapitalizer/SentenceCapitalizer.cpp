#include "SentenceCapitalizer.h"
#include <iostream>
#include <cctype>

using namespace std;

	SentenceCapitalizer::SentenceCapitalizer(){

		unconvertedSentence[SIZE];
	}

	void SentenceCapitalizer::getUserInput(){

		cout << "Please enter a string: " << endl;
		cin.getline(unconvertedSentence, SIZE);
        cout << "\ndebug: " << unconvertedSentence << "\n";
    }

    void SentenceCapitalizer::displayAndConvertSentence(char *arr){

        cout << arr << endl;

        if(arr[0] != ' '){

            arr[0] = toupper(arr[0]);
        }
        for(int i = 0; i < SIZE; i++){

        	if(arr[i] == '.'){

        		if(arr[i+1] != ' '){

        			arr[i+1] = toupper(arr[i+1]);
        		}else if(arr[i+2] != ' '){

        			arr[i+2] = toupper(arr[i+2]);
        		}
        	}else if(arr[i] == '!'){

        		if(arr[i+1] != ' '){

        			arr[i+1] = toupper(arr[i+1]);
        		}else if(arr[i+2] != ' '){

        			arr[i+2] = toupper(arr[i+2]);
        		}
        	}else if(arr[i] == '?'){

        		if(arr[i+1] != ' '){

        			arr[i+1] = toupper(arr[i+1]);
        		}else if(arr[i+2] != ' '){

        			arr[i+2] = toupper(arr[i+2]);
        		}
        	}
        }
        cout << "\nCapitalized Sentence:" << endl;
        cout << arr << endl;
    }
