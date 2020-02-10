#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "ListNode.h"


class LinkedList{


    public:

	   	// pointer to linked list header
		ListNode *head;

		// constructor
	    LinkedList();

	    // deconstructor
	    ~LinkedList();

	    // linked list operations
	    void appendNode(int);
	    void insertNode(int);
	    void deleteNode(int);
	    void display() const;

};

#endif // LINKEDLIST_H
