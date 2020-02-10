#ifndef CUSTOMERACCOUNTDATA_H
#define CUSTOMERACCOUNTDATA_H

	const int SIZE = 80;

	struct CustomerAccount{

		// customer name
		char name[SIZE];

		// customer address
		char address[SIZE];

		// customer city
		char city[SIZE];

		// customer state
		char state[SIZE];

		// customer zip code
		char zipCode[SIZE];

		// customer phone number
		char phoneNumber[SIZE];

		// customer account balance
		char balance[SIZE];

		// customer last payment date
		char lastPaymentDate[SIZE];
		
	};

#endif // CUSTOMERACCOUNTDATA_H