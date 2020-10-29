#include <iostream>

#include "linkedList.h"
#include "ListNode.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

	linkedList::linkedList(){

		head = NULL;
	}

	linkedList::~linkedList(){

		ListNode *nodePointer = head;
		ListNode *nextNode;

		while(nodePointer){

			nextNode = nodePointer->next;
			delete nodePointer;
			nodePointer = nextNode;
		}
	}

	ListNode* linkedList::getHead(){

		return head;
	}

	// stack
	void linkedList::addNodeAtBeginning(string s){

        
        ListNode *newNode = new ListNode;

        // store the string in the new node
        newNode->data = s;

        // point the "next" of the new node to the "head" of the list
        newNode->next = head;

        // set the new node to the head
        head = newNode;

	}

	// stack
	void linkedList::addNodeAtBeginning(char letter){

        
        ListNode *newNode = new ListNode;

        // store the string in the new node
        newNode->data = letter;

        // point the "next" of the new node to the "head" of the list
        newNode->next = head;

        // set the new node to the head
        head = newNode;
	}
	
	void linkedList::addNodeInAscendinglOrder(string s){

		ListNode *newNode = new ListNode;
		ListNode *nodePointer;
		ListNode *previousNode = NULL;

		newNode->data = s;
		newNode->next = NULL;

		if(!head){

			head = newNode;

		}else{

			nodePointer = head;

			while(nodePointer != NULL && nodePointer->data < s){

				previousNode = nodePointer;
				nodePointer = nodePointer->next;
			}
			if(previousNode == NULL){

				head = newNode;
				newNode->next = nodePointer;
			}else{

				previousNode->next = newNode;
				newNode->next = nodePointer;
			}
		}
	}

	// queue
	void linkedList::appendNode(string s){

        ListNode *newNode = new ListNode;
        ListNode *nodePointer;
        
        newNode->data = s;
        newNode->next = NULL;

        if(!head){
            
            head = newNode;
        }else{
            
            nodePointer = head;
            while(nodePointer->next){
                
                nodePointer = nodePointer->next;
            }
            nodePointer->next = newNode;
        }
	}

	// queue
	void linkedList::appendNode(char letter){

        ListNode *newNode = new ListNode;
        ListNode *nodePointer;
        
        newNode->data = letter;
        newNode->next = NULL;

        if(!head){
            
            head = newNode;
        }else{
            
            nodePointer = head;
            while(nodePointer->next){
                
                nodePointer = nodePointer->next;
            }
            nodePointer->next = newNode;
        }
	}

	void linkedList::removeNodeAtBeginning(){

		ListNode *nodePointer;
	    if(!head){

	    	cout << "\nThe list is empty.\n";
	    }else{

	    	nodePointer = head;
	    	head = nodePointer->next;
	    	delete nodePointer;
	    }
	}

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