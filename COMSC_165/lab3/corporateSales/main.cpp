#include <iostream>
#include "CorporateSales.h"
#include <string>


using namespace std;

	int main(){

		string east = "East";
		string west = "West";
		string north = "North";
		string south = "South";

		CorporateSales cso;

		cso.createDivisionAndReadDataAndDisplayData(east);
        cso.createDivisionAndReadDataAndDisplayData(west);
        cso.createDivisionAndReadDataAndDisplayData(north);
		cso.createDivisionAndReadDataAndDisplayData(south);



	    return 0;
	}
