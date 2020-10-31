#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// needed header file
#include "vleia_ListNode.h"

	class linkedList{

		private:

			// head of the list
			ListNode *head;

		public:

			// constructor initializes head to null
			linkedList();

			// destructor frees any dynamically created nodes 
			~linkedList();

			// returns head 
			ListNode* getHead();							

			// pushes nodes at the beginning of the list
			// usage: stack
			void addNodeAtBeginning(std::string);

			// pushes nodes at the beginning of the list
			// usage: stack			
			// overloaded: takes a char
			void addNodeAtBeginning(char);

			// adds nodes to a list in ascending order
			void addNodeInAscendinglOrder(std::string);

			// pushes nodes at the end of the list
			// usage: queue
			void appendNode(std::string);					

			// pushes nodes at the end of the list
			// usage: queue			
			// overloaded: takes a char
			void appendNode(char);	

			// pops node from beginning of list	
			void removeNodeAtBeginning();

			// prints the whole list
			void printList();
	};
#endif
