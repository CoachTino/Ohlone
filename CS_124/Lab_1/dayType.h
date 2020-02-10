#ifndef DAYTYPE_H
#define DAYTYPE_H
#include <string>

class dayType{

    private:

    	std::string weekDay[6];
		std::string today;
		std::string nextDay;
		std::string previousDay;
        std::string futureDay;

    public:

    	// constructor
    	dayType();

    	// destructor
    	~dayType();

    	// set the day of the week
    	void setDay(int);

    	// set the next day
    	void setNextDay(int);

    	// set the previous day
    	void setPreviousDay(int);

    	// print the day of the week
    	void printDay();

    	// return the day
    	std::string getCurrentDay();

    	// return the next day
    	std::string getNextDay();

    	// return the previous day
    	std::string getPreviousDay();

    	// calculate and return the day by adding days to current day
    	void calculateFutureDay(int, int);

        // print the future day
        void printFutureDay();

};

#endif // DAYTYPE_H
