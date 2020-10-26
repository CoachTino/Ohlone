#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "ListNode.h"

	class linkedList{

		private:

			ListNode *head;

		public:

			linkedList();
			~linkedList();

			ListNode* getHead();							// function pointer

			void addNodeAtBeginning(std::string);			// usage: stack
			void addNodeAtBeginning(char);					// usage: stack				// overloaded
			void addNodeInAlphabeticalOrder(std::string);
			void appendNode(std::string);					// usage: queue
			void appendNode(char);							// usage: queue				// overloaded
			void printList();
	};
#endif