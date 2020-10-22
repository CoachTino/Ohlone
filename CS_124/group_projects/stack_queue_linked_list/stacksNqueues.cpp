/*
  authors: Zakaria, Neiyo, Tino
  program name: stacks n queues
  description: demonstrates stacks and queues using singularly linked list 
  date authored: Fall 2020


requirements that we have to meet as called out in the canvas assignment: 

- ask a user for a word                      - done
- store each character into a stack          - done
- store each character into a queue          - done
- print the stack                            - done
- print the queue                            - done

Zak - addAtEnd for queue
Neiyo - push for stack
Tino -  print
(main function worked on together)
*/

#include <iostream>
#include <string>

// to make life easier
using std::string;
using std::cout;
using std::cin;
using std::endl;

// struct for nodes in the list
struct Node {
  string data;
  Node* next;
};

// function prototypes
void addAtEnd(Node *&, Node *&, char);
void push(Node *&, char);
void print(Node *&);

// driver code
int main(){

  // create stack list
  Node* stackHead = nullptr;

  // create queue list
  Node* queueHead = nullptr;
  Node* queueTail = nullptr;

  // string to store user input
  string name;
  // console printout for user interaction
  cout << "Enter a string: ";
  // store user input in string
  cin >> name;
  
  // range based loop that stores
  // each index of string name
  // in the char variable c
  for (char c : name) {

    // push char into stack here
    push(stackHead, c);

    // add to char to queue here
    addAtEnd(queueHead, queueTail, c);

  }
  
  // prints the linked list
  cout << "\nStack List: ";
  print(stackHead);

  // prints the linked list
  cout << "\nQueue List: ";
  print(queueHead);
}



// function definitions


// queue add at the end
// need head and tail pointers as @params
void addAtEnd(Node* &queueHead, Node* &queueTail, char letter)
{
  // create new node to hold data and character of user inputted word
  Node* temp = new Node;
  temp->data = letter;
  temp->next = nullptr;
  if (queueHead == nullptr) { // first node in List is defined here
        queueHead = temp;
        queueTail = temp;
    }
    else {
        // set next node to be added to list to the end of list
        queueTail->next = temp;
        queueTail = queueTail->next;
    }
}

// stack push (add at beginning)
// only need head pointer
void push(Node* &head, char letter)
{
  Node* temp = new Node;

  temp -> data =  letter; 
  temp -> next = head; 
 
  head = temp;
}

// takes head pointer and prints the whole list
void print(Node* &head){
  
  Node* nodePointer;

  // check if the list is empty
  if(!head){

    // tell the user the list is empty
    cout << "\nthe list is empty\n";
  }else{

    // set the nodePointer to the head and traverse the list
    nodePointer = head;
    while(nodePointer){

      // print out the data in the node to the console
      cout << nodePointer->data;
      // move to the next node
      nodePointer = nodePointer->next;
      // formatting the console output
      if(nodePointer){

        // formatting the console output
        cout << " -> ";
      }
    }
    // formatting the console output
    cout << std::endl;
  }
}