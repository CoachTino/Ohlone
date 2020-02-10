#ifndef CUSTOMERACCOUNTPROGRAM_H
#define CUSTOMERACCOUNTPROGRAM_H

	class CustomerAccountProgram{

		public:

    	// displays a menu for the user to interact with an item
    	int inventoryMenu();

    	// add new records to the file
    	void addNewRecords();

    	// display any record in the file
    	void displayRecords();

    	// change any record in the file
    	void changeRecords();
		
	};

#endif // CUSTOMERACCOUNTPROGRAM_H