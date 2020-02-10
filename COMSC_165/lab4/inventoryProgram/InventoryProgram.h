#ifndef INVENTORYPROGRAM_H
#define INVENTORYPROGRAM_H
#include "InventoryItem.h"
#include <fstream>

class InventoryProgram
{
    public:

    	int numItems;

    	// displays a menu for the user to interact with an item
    	int inventoryMenu();

    	// add new records to the file
    	void addNewRecords();

    	// display any record in the file
    	void displayRecords();

    	// change any record in the file
    	void changeRecords();
};

#endif // INVENTORYPROGRAM_H
