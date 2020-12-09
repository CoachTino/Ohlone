#include <iostream>
#include <fstream>

struct node{ //the making of nodes
	 std::string data;
	 node *next; 
};

class link{
  public:
  void create(node* &head,node* &tail);
  void add_at_end(std::string word, node* &head, node* &tail);
  void print(node* &head);
	void createQueue(node* &head,node* &tail,std::string name,std::string a);
  friend class data;

};

void link::create(node* &head, node* &tail){
  head = nullptr;// set to null becaue there is no nodes 
	tail = nullptr;		
} 

void link::add_at_end(std::string word, node* &head, node* &tail){ 
  node *newnode = new node; 
  newnode->data = word;

  if(head == nullptr){// if theres no nodes in list
    newnode->next = nullptr;
    head = newnode;
    tail = newnode;
  }
  else{
    newnode->next=nullptr;//the tail will connect to the newnode and the newnode will become the tail
    tail->next = newnode; 
    tail = newnode;
  }
}

void link::print(node* &head){
  std::cout << std::endl << "Here is a list of people in the waitlist" <<std::endl;
	while(head!=nullptr){
    std::cout << head->data <<std::endl;
    head = head->next;
  }
}

void link::createQueue(node* &head, node* &tail,std::string name,std::string a){
  create(head, tail);
  int counter = 0;
  int cap = 6;
  std::string g;
  std::ifstream file;
  bool found=false;
  
  file.open (name);
  while(!file.eof()){
    getline(file,g);
    add_at_end(g,head,tail);
    if(g==a){
      found = true;
    }
    counter++; //how many ppl in the list
  }  
  file.close();
  if(found == true){
    std::cout << "You are already in the list" <<std::endl;
  }
  else{
    if (counter >= cap){
		  std::cout<<"Line is full. Please refer to the list of contacts who had offered to help or waitlist in an available spots in another category."<<std::endl;
	  }
	  else {
      std::ofstream of;
      of.open (name, std::ios::app);
      of  <<  std::endl<<a;
      of.close();
		  add_at_end(a,head, tail);
      std::cout << "You have been added to the list! We will contact you with more information. Be Safe!" <<std::endl;
	  }
  }
}