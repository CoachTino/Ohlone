#include "InventoryProgram.h"
#include "InventoryItem.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


	int main(){

		InventoryProgram ipo;
		int choice;

		choice = ipo.inventoryMenu();
		while(choice != 4){

			switch(choice){
				case 1:{
					ipo.addNewRecords();
					break;
				}
				case 2:{
					ipo.displayRecords();
					break;
				}
				case 3:{
					ipo.changeRecords();
					break;
				}
			}
			choice = ipo.inventoryMenu();
		}

	    return 0;
	}
