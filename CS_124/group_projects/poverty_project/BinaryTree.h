#include <iostream>
#include <string>
#include <string>

using std::string;
using std::cout;
using std::endl;

class BinaryTree{

  private:
    
    struct TreeNode{

      // holds the value in the node
      string value;

      // pointer to the left child node
      TreeNode *left;

      // pointer to the right child node
      TreeNode *right;
    };

    // pointer to the root node
    TreeNode *root;

    // private member functions

    void insert(TreeNode *&nodePtr, TreeNode *&newNode){

      if(nodePtr == NULL){

        nodePtr = newNode;
      }else if(newNode->value < nodePtr->value){

        insert(nodePtr->left, newNode);

      }else{
        
        insert(nodePtr->right, newNode);
      }
    }
    // void destroySubTree();
    // void deleteNode();
    // void makeDeletion();
    void displayInOrder(TreeNode *nodePtr) const {

      if(nodePtr){

        displayInOrder(nodePtr->left);
        cout << nodePtr->value << endl;
        displayInOrder(nodePtr->right);
      }
    }

    void displayPreOrder(TreeNode *nodePtr) const {

      if(nodePtr){

        displayPreOrder(nodePtr->left);
        cout << nodePtr->value << endl;
        displayPreOrder(nodePtr->right);
      }
    }

    void displayPostOrder(TreeNode *nodePtr) const {

      if(nodePtr){

        displayPostOrder(nodePtr->left);
        cout << nodePtr->value << endl;
        displayPostOrder(nodePtr->right);
      }
    }
    // void displayPreOrder();
    // void displayPostOrder();

    public:

      // constructor
      BinaryTree(){

        root = NULL;
      }
      
      // //destructor
      // ~BinaryTree(){

      //   destroySubTree(root);
      // }

      void insertNode(string name){

        TreeNode *newNode = NULL;

        newNode = new TreeNode;
        newNode->value = name;
        newNode->left = newNode->right = NULL;

        insert(root, newNode);
      }
      // bool searchNode(string);
      // void remove(string);

      void displayInOrder() const {

        displayInOrder(root);
      }

      void displayPreOrder() const {

        displayPreOrder(root);
      }

      void displayPostOrder() const {

        displayPostOrder(root);
      }
};
