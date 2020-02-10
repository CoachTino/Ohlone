#include "InventoryProgram.h"
#include "InventoryItem.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

	// for the user to perform tasks
	int InventoryProgram::inventoryMenu(){

		int choice;

		cout << "MENU" << endl;
		cout << "1: Add new items to the inventory record." << endl;
		cout << "2: Display inventory item." << endl;
		cout << "3: Change any item in the inventory record." << endl;
		cout << "4: Quit the program.\n" << endl;
		cin >> choice;
		while(choice < 1 || choice > 4){

			cout << "You entered an invalid option. Please try again." << endl;
			cin >> choice;
		}

		return choice;
	}

	// add new records to the file
	void InventoryProgram::addNewRecords(){

    	// create fstream object
    	//open the file for output in binary mode
    	fstream fileObject("test.txt", ios::out | ios::binary);
    	if (!fileObject.is_open()){

    		cout << "Error reading file!" << endl;
    		exit(EXIT_FAILURE);
    	}else{

    		// create inventoryItem object
	    	InventoryItem item;
	    	char repeat;
	    	int i = 0;

	    	do{
			// get user input for item information
			cout << "Provide the item description: ";
			cin.ignore();
			cin.getline(item.description, DES);
			cout << "Quantity: ";
			cin >> item.quantity;
			cout << "Wholesale cost: ";
			cin >> item.wholesaleCost;
			cout << "Retail cost: ";
			cin >> item.retailCost;
			cout << "Date added (mm/dd/yy): ";
			cin.ignore();
			cin.getline(item.dateAddedToInventory, DATE);
			cout << endl;

	    	// write contents of the item to the file
			fileObject << endl;
			fileObject << item.description << endl;
			fileObject << item.quantity << endl;
			fileObject << item.wholesaleCost << endl;
			fileObject << item.retailCost << endl;
			fileObject << item.dateAddedToInventory << endl;

			cout << "Do you want to add another item? (y/n) ";
			cin >> repeat;
			}while(repeat == 'y');
			cout << endl;

	    	// close the file
	    	fileObject.close();
    	}
	}

	// display any record in the file
	void InventoryProgram::displayRecords(){

		fstream fout("test.txt", ios::in | ios:: binary);
		InventoryItem item;
    	
		// read contents of the item to the file
		fout >> item.description;
		fout >> item.quantity;
		fout >> item.wholesaleCost;
		fout >> item.retailCost;
		fout >> item.dateAddedToInventory;

		do{
		// display item information
		cout << "\nItem description:";
			cout << item.description;
		cout << "\nQuantity:";
			cout << item.quantity;
		cout << "\nWholesale cost:";
			cout << item.wholesaleCost;
		cout << "\nRetail cost:";
			cout << item.retailCost;
		cout << "\nDate added (mm/dd/yy):";
			cout << item.dateAddedToInventory;
		cout << endl;

		// read contents of the item to the file
		fout >> item.description;
		fout >> item.quantity;
		fout >> item.wholesaleCost;
		fout >> item.retailCost;
		fout >> item.dateAddedToInventory;
		}while(!fout.eof());

		// close the file
	    fout.close();
	}

	// change any record in the file
	void InventoryProgram::changeRecords(){

		fstream fin("test.txt", ios::out | ios:: binary);
		InventoryItem item;
		int itemNumber = 0;

		// move to desired item and display
		cout << "Enter the item # you'd like to edit: ";
		cin >> itemNumber;
		fin.seekg((itemNumber - 1)*sizeof(item), ios::beg);

		// get user input for item information
		cout << "Enter new item info:" << endl;
		cout << "Item description: ";
			cin.ignore();
			cin.getline(item.description, DES);
		cout << "Quantity: ";
			cin >> item.quantity;
		cout << "Wholesale cost: ";
			cin >> item.wholesaleCost;
		cout << "Retail cost: ";
			cin >> item.retailCost;
		cout << "Date added (mm/dd/yy): ";
			cin.ignore();
			cin.getline(item.dateAddedToInventory, DATE);
		cout << endl;

    	// write contents of the item to the file
		fin << endl;
		fin << item.description << endl;
		fin << item.quantity << endl;
		fin << item.wholesaleCost << endl;
		fin << item.retailCost << endl;
		fin << item.dateAddedToInventory << endl;
		
		// close the file
	    fin.close();
}
