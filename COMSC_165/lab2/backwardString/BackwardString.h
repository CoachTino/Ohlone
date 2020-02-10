#ifndef BACKWARDSTRING_H
#define BACKWARDSTRING_H


class BackwardString
{
    public:
		int SIZE = 80;
		int minIndex = 0;
		char backwardString[];

		BackwardString();
		void getUserInputAndSetPointerToString();
		void displayBackwardString(char *);
};

#endif // BACKWARDSTRING_H
