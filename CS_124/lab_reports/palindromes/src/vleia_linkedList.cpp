#include <iostream>

#include "vleia_linkedList.h"
#include "vleia_ListNode.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

	// constructor initializes head to null
	linkedList::linkedList(){

		head = NULL;
	}

	// destructor frees any dynamically created nodes 
	linkedList::~linkedList(){

		// nodepointer to free the list, set it to the head
		ListNode *nodePointer = head;

		// used to traverse the list
		ListNode *nextNode;

		// while nodepointer != NULL
		while(nodePointer){

			// nextnode = currentnode->next
			nextNode = nodePointer->next;

			// free the memory
			delete nodePointer;

			// nodepointer = nextnode
			nodePointer = nextNode;
		}
	}

	// returns head 
	ListNode* linkedList::getHead(){

		return head;
	}

	// pushes nodes at the beginning of the list
	// usage: stack
	void linkedList::addNodeAtBeginning(string s){

        // dynamically create a new node
        ListNode *newNode = new ListNode;

        // store the string in the new node
        newNode->data = s;

        // point the "next" of the new node to the "head" of the list
        newNode->next = head;

        // set the new node to the head
        head = newNode;

	}

	// pushes nodes at the beginning of the list
	// usage: stack			
	// overloaded: takes a char
	void linkedList::addNodeAtBeginning(char letter){

        // dynamically create a new node
        ListNode *newNode = new ListNode;

        // store the string in the new node
        newNode->data = letter;

        // point the "next" of the new node to the "head" of the list
        newNode->next = head;

        // set the new node to the head
        head = newNode;
	}

	// adds nodes to a list in ascending order
	void linkedList::addNodeInAscendinglOrder(string s){

		// dynamically create a new node
		ListNode *newNode = new ListNode;

		// node pointer to traverse the list
		ListNode *nodePointer;

		// 
		ListNode *previousNode = NULL;

		// assign the data
		newNode->data = s;

		// set next node's value
		newNode->next = NULL;


		// if the list is empty
		if(!head){


			// head points to newnode
			head = newNode;

		}else{

			// start at the head of the list
			nodePointer = head;

			// while nodepointer is not head AND data is less than parm
			while(nodePointer != NULL && nodePointer->data < s){

				// previousnode = nodepointer
				previousNode = nodePointer;

				// set next node
				nodePointer = nodePointer->next;
			}

			// if previousnode = head
			if(previousNode == NULL){

				// head is the new node
				head = newNode;

				// set next node
				newNode->next = nodePointer;

			}else{

				// put the new node here
				previousNode->next = newNode;

				// set new node value
				newNode->next = nodePointer;
			}
		}
	}

	// pushes nodes at the end of the list
	// usage: queue
	void linkedList::appendNode(string s){

		// dynamically create new node
        ListNode *newNode = new ListNode;

        // pointer to traverse the list
        ListNode *nodePointer;
        

        // assign the parm to the node
        newNode->data = s;

        // set next node value
        newNode->next = NULL;


        // if the list is empty
        if(!head){
            
            // head is newnode
            head = newNode;

        }else{
            
            // pointer starts at head
            nodePointer = head;

            // while next has points to a node
            while(nodePointer->next){
                
                // pointer = next node
                nodePointer = nodePointer->next;
            }
            // point last node to the newnode
            nodePointer->next = newNode;
        }
	}

	// pushes nodes at the end of the list
	// usage: queue			
	// overloaded: takes a char
	void linkedList::appendNode(char letter){

		// dynamically create new node
        ListNode *newNode = new ListNode;

        // pointer to traverse the list
        ListNode *nodePointer;
        

        // assign the parm to the node
        newNode->data = letter;

        // set next node value
        newNode->next = NULL;


        // if the list is empty
        if(!head){
            
            // head is newnode
            head = newNode;

        }else{
            
            // pointer starts at head
            nodePointer = head;

            // while next has points to a node
            while(nodePointer->next){
                
                // pointer = next node
                nodePointer = nodePointer->next;
            }
            // point last node to the newnode
            nodePointer->next = newNode;
        }
	}

	// pops node from beginning of list	
	void linkedList::removeNodeAtBeginning(){

        // pointer to traverse the list
		ListNode *nodePointer;

		// if the list is empty
	    if(!head){

	    	// tell the user
	    	cout << "\nThe list is empty.\n";

	    }else{

	    	// point to the head
	    	nodePointer = head;

	    	// set head to next node
	    	head = nodePointer->next;

	    	// free nodepointer
	    	delete nodePointer;
	    }
	}

	// prints the whole list
	void linkedList::printList(){

        // to traverse the list  
        ListNode *nodePointer;

        // if list is empty
        if(!head){

          // do this
          cout << "\nThe list is empty.\n";
          return;
        }else{ // if it's not empty

          // start at the beginning of the list
          nodePointer = head;
          // cout << "\nThe items in the list are: \n";

          // loop while nodePointer != NULL
          while(nodePointer){

            // purely here for making the output look nice          
            cout << "-> ";

            // print node's data to console 
            cout << nodePointer->data << endl;

            // go to next node
            nodePointer = nodePointer->next;

          }
          // line spacing
          cout << endl;
        }
	}