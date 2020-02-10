#ifndef CORPORATESALES_H
#define CORPORATESALES_H
#include <string>

class CorporateSales
{
    public:

        // structure with corporate divisions attributes
    	struct DivisionSales{

    		std::string divisionName;
    		double quarterOne;
    		double quarterTwo;
    		double quarterThree;
    		double quarterFour;
    		double annualSales;
    		double averageQuarterlySales;
    	};
};

#endif // CORPORATESALES_H
