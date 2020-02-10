#include <iostream>
#include "ListNode.h"
#include "LinkedList.h"

using namespace std;

	int main(){

	    int choice;
	    int num;
	    LinkedList llo;

	    do{
            cout << "\tMENU";
	    	cout << "\n1 - Append node";
	    	cout << "\n2 - Insert node";
	    	cout << "\n3 - Delete node";
	    	cout << "\n4 - Exit";

	    	cout << "\n\nEnter a menu option: ";
	    	cin >> choice;

			switch(choice){
				case 1:{
						cout << "Enter an integer: ";
						cin >> num;
						llo.appendNode(num);
					break;
				}
				case 2:{
						cout << "Enter an integer: ";
						cin >> num;
						llo.insertNode(num);
					break;
				}
				case 3:{
						cout << "Enter an integer: ";
						cin >> num;
						llo.deleteNode(num);
					break;
				}

	    	}
	    }while(choice != 4);

	    return 0;
	}
