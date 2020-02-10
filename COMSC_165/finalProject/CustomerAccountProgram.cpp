#include <iostream>
#include <fstream>
#include <cstdlib>
#include "CustomerAccountProgram.h"
#include "CustomerAccount.h"

using namespace std;

	// for the user to perform tasks
	int CustomerAccountProgram::inventoryMenu(){

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
	void CustomerAccountProgram::addNewRecords(){

    	// create fstream object
    	// open the file for output in binary mode
    	fstream fileObject;
    	fileObject.open("customerAccount.txt", ios::out);

    	if (!fileObject.is_open()){

    		cout << "Error reading file!" << endl;
    		exit(EXIT_FAILURE);
    	}else{

    		// create Customer Account object
	    	CustomerAccount caObject;
	    	char repeat;
	    	int i = 0;

	    	do{
			// get user input for customer account information
			cout << "Provide the Customer Account Information." << endl;
			cout << "\nCustomer Name: ";
			cin.ignore();
			cin.getline(caObject.name, SIZE);

			cout << "Address Line 1: ";
			cin.ignore();
			cin.getline(caObject.address, SIZE);

			cout << "City: ";
			cin.ignore();
			cin.getline(caObject.city, SIZE);

			cout << "State: ";
			cin.ignore();
			cin.getline(caObject.state, SIZE);

			cout << "Zip: ";
			cin.ignore();
			cin.getline(caObject.zipCode, SIZE);

			cout << "Phone Number: ";
			cin.ignore();
			cin.getline(caObject.phoneNumber, SIZE);

			cout << "Account Balance: ";
			cin.ignore();
			cin.getline(caObject.balance, SIZE);
				while(caObject.balance < 0){
					cout << "Invalid entry. Please enter a positve balance: ";
					cin >> caObject.balance;
				}

			cout << "Last Payment Date (mm/dd/yyyy): ";
			cin.ignore();
			cin.getline(caObject.lastPaymentDate, SIZE);

			// write cusomter account data to file
			fileObject.write(reinterpret_cast<char*>(&caObject), sizeof(caObject));

			cout << "Do you want to add another item? (y/n) ";
			cin >> repeat;
			}while(repeat == 'y');
			cout << endl;

	    	// close the file
	    	fileObject.close();
    	}
	}

	// display any record in the file
	void CustomerAccountProgram::displayRecords(){

		fstream fileObject;
		fileObject.open("customerAccount.txt", ios::in);
		CustomerAccount caObject;

		fileObject.read(reinterpret_cast<char*>(&caObject), sizeof(caObject));

		while(!fileObject.eof()){

			cout << "\nCustomer Account Name: ";
				cout << caObject.name << endl;
			cout << "Address: ";
				cout << caObject.address << " "
					 << caObject.city << " "
					 << caObject.state << " "
					 << caObject.zipCode << endl;
			cout << "Phone Number: ";
				cout << caObject.phoneNumber << endl;;
			cout << "Account Balance: ";
				cout << caObject.balance << endl;
			cout << "Last Payment Date: ";
				cout << caObject.lastPaymentDate << endl;

			fileObject.read(reinterpret_cast<char*>(&caObject), sizeof(caObject));
		}

		// close the file
	    fileObject.close();
	}

	// change any record in the file
	void CustomerAccountProgram::changeRecords(){

		fstream fileObject;
		fileObject.open("customerAccount.txt", ios::in | ios::out);
		CustomerAccount caObject;
		int recordNumber = 0;

		// move to desired item and display
		cout << "Enter the item # you'd like to edit: ";
		cin >> recordNumber;

		fileObject.seekg((recordNumber)*sizeof(caObject), ios::beg);
		fileObject.read(reinterpret_cast<char*>(&caObject), sizeof(caObject));

		cout << "Old record: " << endl;
			cout << "Customer Account Name: ";
				cout << caObject.name << endl;
			cout << "Address: ";
				cout << caObject.address << " "
					 << caObject.city << " "
					 << caObject.state << " "
					 << caObject.zipCode << endl;
			cout << "Phone Number: ";
				cout << caObject.phoneNumber << endl;;
			cout << "Account Balance: ";
				cout << caObject.balance << endl;
			cout << "Last Payment Date: ";
				cout << caObject.lastPaymentDate << endl;

		cout << "Enter new record: " << endl;
		// get user input for customer account information
		cout << "Provide the Customer Account Information." << endl;
		cout << "\nCustomer Name: ";
		cin.ignore();
		cin.getline(caObject.name, SIZE);

		cout << "Address Line 1: ";
		cin.ignore();
		cin.getline(caObject.address, SIZE);

		cout << "City: ";
		cin.ignore();
		cin.getline(caObject.city, SIZE);

		cout << "State: ";
		cin.ignore();
		cin.getline(caObject.state, SIZE);

		cout << "Zip: ";
		cin.ignore();
		cin.getline(caObject.zipCode, SIZE);

		cout << "Phone Number: ";
		cin.ignore();
		cin.getline(caObject.phoneNumber, SIZE);

		cout << "Account Balance: ";
		cin.ignore();
		cin.getline(caObject.balance, SIZE);
			while(caObject.balance < 0){
				cout << "Invalid entry. Please enter a positve balance: ";
				cin >> caObject.balance;
			}
		cout << "Last Payment Date (mm/dd/yyyy): ";
		cin.ignore();
		cin.getline(caObject.lastPaymentDate, SIZE);

		fileObject.seekg((recordNumber)*sizeof(caObject), ios::beg);
		fileObject.write(reinterpret_cast<char*>(&caObject), sizeof(caObject));

		// close the file
	    fileObject.close();
	}
