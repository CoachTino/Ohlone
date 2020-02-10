#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H
#include <string>

    const int DES = 80;
    const int DATE = 12;
    const int INTEGER = 21;

    struct InventoryItem{

    	// item description
    	char description[DES];

    	// quantity on hand
    	char quantity[INTEGER];

    	// wholesale cost
    	char wholesaleCost[INTEGER];

    	// retail cost
    	char retailCost[INTEGER];

    	// date added to inventory
    	char dateAddedToInventory[DATE];
    };

#endif // INVENTORYITEM_H
