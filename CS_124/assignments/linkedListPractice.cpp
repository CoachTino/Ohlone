/*
  author: Tino Lei'a
  program name: simple singularly linked list
  description: takes user input of words and adds it to a linked list
  date authored: Fall 2020
*/

#include <iostream>
#include <string>

// to make my life easier
using std::cout;
using std::endl;
using std::cin;
using std::string;

  // struct to represent a node in the list
  struct ListNode{

    // string to hold the word the user enters
    string data;

    // pointer to the "next node"
    struct ListNode *next; 
  };

  // class to hold functions to create the list, add nodes at the front, print the nodes
  class LinkedList{

    private:

      // private member for "head" or beginning of list
      ListNode *head;

      // private member for "tail" or end of list
      ListNode *tail;

    public:
      
      // constructor calls create() to create the start and end of the list
      LinkedList(){

        create();
      }

      void create(){

        // set head of list
        head = NULL;

        // set tail of list 
        // as the code stands now nothing is actually pointing to the end of the list
        // this is just here to meet the requirement of the assignment
        tail = NULL;
      }

      void add_at_begin(string s){

        // points to a new node
        ListNode *newNode;

        // allocate a new node
        newNode = new ListNode;

        // store the string in the new node
        newNode->data = s;

        // point the "next" of the new node to the "head" of the list
        newNode->next = head;

        // set the new node to the head
        head = newNode;
      }

      void print(){

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
          cout << "\nThe elements in the list are: \n";

          // loop while nodePointer != NULL
          while(nodePointer){

            // print node's data to console 
            cout << nodePointer->data;

            // go to next node
            nodePointer = nodePointer->next;

            // purely here for making the output look nice          
            if(nodePointer){

              // purely here for making the output look nice          
              cout << " -> ";
            }
          }
          // line spacing
          cout << endl;
        }
      }
  };
  
  int main(){

      // to hold user input of menu option
      int choice;

      // to hold user input of word to store in linked list
      string word;

      // create linked list object
      LinkedList llo;

      // loop for menu
      do{

        // printout menu
        cout << "\tMENU";
        cout << "\n1 - Add node";
        cout << "\n2 - Print list";
        cout << "\n3 - Exit";

        // take user input
        cout << "\n\nEnter a menu option: ";
        cin >> choice;

        // based on user input
        switch(choice){
          
          // do this
          case 1:{
              cout << "Enter a word with no spaces please: ";
              cin >> word;
              llo.add_at_begin(word);
            break;
          }

          // or this
          case 2:{
            llo.print();
          }  
        }
        // conditional for looping based on user input
      }while(choice == 1 || choice == 2);

      // printout to let the user know program is ending
      cout << "\nProgram is finished. Later dude...\n";
  }
