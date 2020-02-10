#include <iostream>
#include <fstream>
#include "CustomerAccountProgram.h"
#include "CustomerAccount.h"

using namespace std;

	int main(){

		CustomerAccountProgram customerAccount;
		int choice;

		choice = customerAccount.inventoryMenu();
		while(choice != 4){

			switch(choice){
				case 1:{
					customerAccount.addNewRecords();
					break;
				}
				case 2:{
					customerAccount.displayRecords();
					break;
				}
				case 3:{
					customerAccount.changeRecords();
					break;
				}
			}
			choice = customerAccount.inventoryMenu();
		}

	    return 0;
	}
