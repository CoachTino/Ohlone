/*
Authors: Erick, Immad, Tino
Author Date: 11/3 Fall 2020
Program Name: HashTable Practice
Program Description: A simple demonstration of hashtable implementing linked lists.
*/

#include <iostream>
#include <vector>
using std::string;
using std::cout;
using std::endl;
using std::cin;

struct node
{
   string data;
   int hashcode;

   node *next;
};

class HashTable{

  private:

    std::vector <node*> buckets; //to create the hash table
    int current_size; //size of node

  public:
  
    //constructor pushes back vector 3x
    HashTable();
    
    //hash function of a string
    int hash_code(const string&);
    
    //insert names into the hash table
    void insert(const string&);
    
    /*
    prints the names and hashcodes stored in the hash table
    */
    void printHashTable();
    
    /*
    searches the hash table for a string from user input (in main)
    returns true if the string is found
    returns false if the string is not found
    @parm string from user input in main
    */
    bool find(string);
};

int main(){
string name;

  // we used this for testing the mod value 
  // and how we store them in the hash table/separate chaining

  // const string tino = "tino";
  // const string immad = "immad";
  // const string erick = "Erick";

  //   const string tino1 = "Tino";
  // const string immad1 = "Immad";
  // const string erick1 = "erick";

  //   const string tino2 = "Tinoaaaaa";
  // const string immad2 = "Immadaaaaa";
  // const string erick2 = "ErickaAERSDFsdfA1423aaa";

  HashTable object_of_hash_table_class;
// user input to take a name to search
  // store user input in a string
  // pass that string as an argument to the insert fucntion
  int count;
  cout<<"how many names would you like to put in the hash table"<<std::endl;
  cin>>count;
  for (int i=0;i<count;i++){
cout <<"#"<<i+1<< " Enter a name to store: ";
cin >> name;
cout << endl;
object_of_hash_table_class.insert(name);
  }
object_of_hash_table_class.printHashTable();
  

  // we used this for testing the mod value 
  // and how we store them in the hash table/separate chaining

  // object_of_hash_table_class.insert(tino);
  // object_of_hash_table_class.insert(immad);
  // object_of_hash_table_class.insert(erick);

  // object_of_hash_table_class.insert(tino1);
  // object_of_hash_table_class.insert(immad1);
  // object_of_hash_table_class.insert(erick1);

  //   object_of_hash_table_class.insert(tino2);
  // object_of_hash_table_class.insert(immad2);
  // object_of_hash_table_class.insert(erick2);

  // object_of_hash_table_class.printHashTable();

  // cout << true << " space " << false << endl;
cout << "Enter a name to see if it's stored or not: ";
cin >> name;
cout << object_of_hash_table_class.find(name) << endl;
  // user input to take a name to search
  // store user input in a string
  // pass that string as an argument to the find fucntion
  // cout << object_of_hash_table_class.find({string from above comment});

  return 0;
}

//constructor pushes back vector 3x
HashTable::HashTable()
{
  // we felt we didn't need to create more than 3 indexes in our hash table, so we went with 3
  // we thought the only limitation to memory would be when the separate chaining would use up all the physical memory of the machien this program is running on
  // also every time you push back a vector it size is doubled
   for (int i = 0; i < 3; i++)
   {
      buckets.push_back(nullptr);
   }
   current_size = 0;
}
//hash function of a string
int HashTable::hash_code(const string& str)
{
   int h = 0;
   for (int i = 0; i < str.length(); i++)
   {
     // stri[i] is the char of the char array that builds the string
     // 31 because of ascii
     // source: grabbed this from the text book example in chapter 15
      h = 31 * h + str[i];
   }
   return h;
}
//insert names into the vector 
void HashTable::insert(const string& x)
{
   int h = hash_code(x); //create hascode of a name 

   h = h % buckets.size(); //determines the index the string will be stored in

   if(h > 2 || h < 0){ return; }// if the modulus of hashcode is less than or greater than the indexes in the vector, return

   if (h < 0) { h = -h; } //make the negative hash code into a positive hash code
      
   node* current = buckets[h]; // point current to the memory address of index h of the buckets vector

   while (current != nullptr) // ensure the index of the vector isn't null, and check if the name is already being stored
   {
      if (current-> data == x) { return; } //doesnt store the duplicate names 
      current = current->next;
   }
   
   // create a new node to add to the hash table
   node* new_node = new node;

    // store the name and hash code in the new node
   new_node->data = x;
   new_node->hashcode = hash_code(x);

  // separate chaining below
   new_node->next = buckets[h]; // point new_node's next to the pointer stored in buckets vector's index h
   buckets[h] = new_node; // point the index h in the buckets vector to the memory address of new_node
   
   current_size++;
}
/*
prints the names and hashcodes stored in the hash table
*/
void HashTable::printHashTable(){
  
  // pointer to traverse the vector
  node* current;

  // to count how many chained nodes are in a given index
  int counter = 0;

  // loop to iterate on the entire vector
  for(int i = 0; i < buckets.size(); i++){

    // if the index is null skip this iteration
    if(buckets[i] == nullptr){
      continue;
    }else{  // index points to a node

      current = buckets[i]; // point to the node's addres that is stored in the index

      counter = 1; //there is a node already in the current index 
      while(current->next){

        counter++;  // incrememnt for every node in the separate chain

        // traverse the separate chaining method of nodes
        current = current->next;
      }

      current = buckets[i]; // set current back to the first node

      //now that it is known how many nodes are in one index by using a counter, we can display each node's data and hashcodes.
      // loop for printing each chained node
      for(int i = 0; i < counter; i++){ 

        cout << "The node's data member ";
        cout << current->data << endl;
        
        cout << "The node's hashcode member: ";
        cout << current->hashcode << endl;
        cout << endl;

        // traverse the separate chaining method of nodes
        current = current->next;

      }
    }
  }
}
/*
searches the hash table for a string from user input (in main)
returns true if the string is found
returns false if the string is not found
@parm string from user input in main
*/
 bool HashTable::find(string str){

    // pointer to traverse the vector
  node* current;

    // to count how many chained nodes are in a given index
  int counter = 0;

  // loop to iterate on the entire vector
  for(int i = 0; i < buckets.size(); i++){

    // if the index is null skip this iteration
    if(buckets[i] == nullptr){
      continue;
    }else{  // index points to a node

      current = buckets[i]; // point to the node's addres that is stored in the index

      counter = 1; //there is a node already in the current index 
      while(current->next){

        counter++;  // incrememnt for every node in the separate chain

        // traverse the separate chaining method of nodes
        current = current->next;
      }

      current = buckets[i]; // set current back to the first node
      
      //now that it is known how many nodes are in one index by using a counter, we can display each node's data and hashcodes.
      // loop for printing each chained node
      for(int i = 0; i < counter; i++){

        // if the @parm is == to data in a node, return true
        if(current->data == str){

          return true;
        }
        // traverse the separate chaining method of nodes
        current = current->next;
      }
    }
  }
  // if the string was not found return false
  return false;
 }