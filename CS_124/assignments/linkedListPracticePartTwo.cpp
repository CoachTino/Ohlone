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

    public:
      
      // constructor calls create() to create the start and end of the list
      LinkedList(){

        create();
      }

      void create(){

        // set head of list
        head = NULL;

      }

      void add_at_begin(string s){

        // allocate a new node
        ListNode *newNode = new ListNode;

        // store the string in the new node's string attribute
        newNode->data = s;

        // point the "next" attribute of the new node to the "head" of the list
        newNode->next = head;

        // set the new node to the head
        head = newNode;
      }
      
      void add_at_end(string s){

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
      
      /*
        I decided to go with this method(pun intended) of adding in order
        because I didn't really see a need to create 2 lists
        and have one sorted and one in order of data recieved...
        seemed like unnecessary complexity/time... anyhow if you
        wanted your data in sorted order that's where the 
        sorting algorithms come into play. so as long as you can
        have your data/node come in < the node before it 
        and traverse to the end of the list then that should be fine
      */
      
      void add_in_order(string s){
          
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
      
      void removeNode(){
          
          ListNode *nodePointer;
          
          if(!head){
              
              cout << "\nFAiled to delete, list is empty";
              return;
          }else{
              
              nodePointer = head;
              
              while(nodePointer){
                  
                  ListNode *previousNode = nodePointer;
                  nodePointer = nodePointer->next;
                  delete previousNode;
              }
              head = NULL;
          }
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
        cout << "\n1 - Add a word at the beginning of the list";
        cout << "\n2 - Add a word at the end of the list";     
        cout << "\n3 - Add a word in sorted order in the list";
        cout << "\n4 - Print list of words";
        cout << "\n5 - Delete list of words";
        cout << "\n6 - Exit";

        // take user input
        cout << "\n\nEnter a menu option: ";
        cin >> choice;

        // based on user input
        switch(choice){
          
          // do this
          case 1:{
              cout << "Enter a word with no spaces please: ";
              cin >> word;
              llo.add_in_order(word);
               llo.print();
            break;
          }
          case 2:{
              cout << "Enter a word with no spaces please: ";
              cin >> word;
              llo.add_at_end(word);
               llo.print();
              break;
          }          
          case 3:{
              cout << "Enter a word with no spaces please: ";
              cin >> word;
              llo.add_in_order(word);
               llo.print();
              break;
          }
          // or this
          case 4:{
            llo.print();
            break;
          }            
          case 5:{
            llo.removeNode();
            break;
          }  
        }
        // conditional for looping based on user input
      }while(choice >= 1 && choice <= 5);

      // printout to let the user know program is ending
      cout << "\nProgram is finished. Later dude...\n";
  }


