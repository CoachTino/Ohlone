/*
   This program demonstrates a decision tree for an animal 
   guessing game.
*/

#include <iostream>
#include <string>
#include "binary_tree.h"

using namespace std;

int main()
{
   BinaryTree question_tree(
      BinaryTree("Is it a mammal?",
         BinaryTree("Does it have stripes?",
            BinaryTree("Is it a carnivore?",
               BinaryTree("tiger"),
               BinaryTree("Does it have hooves?", 
               BinaryTree("zebra"), BinaryTree("skunk"))),
            BinaryTree("It is a pig.")),
      BinaryTree("Does it fly?",
         BinaryTree("It is an eagle."),
         BinaryTree("Does it swim?",
            BinaryTree("It is a penguin."),
            BinaryTree("It is an ostrich.")))));


   // BinaryTree("string", BinaryTree("left"), BinaryTree("right"));

   //BinaryTree("left")

   // string classname::getUserInput(){

   //    string temp;
   //    cout << "enter a question: "; 
   //    getline(cin, temp);
   //    return temp;
   // }

   string response, choice;

   bool done = false;

   while (!done)
   {
      BinaryTree left = question_tree.left();
      BinaryTree right = question_tree.right();

      // making the guess
      if (left.empty() && right.empty())
      {
         
         // ask another question
         cout << "Is it a " << question_tree.data() << "? (y/n): ";
         cin >> response;

         // if no do something
         if(response == "n"){

            // ask user for the animal
            cout << "Please enter the animal you were thinking of: ";
            
            // store the animal in memory
            cin >> response;

            // // testing
            // cout << question_tree.height() << endl;
            // cout << question_tree.empty() << endl;
            // cout << question_tree.data() << endl;

            // trying to add a new node with the animal entered from console

            // // print out the new node
            // cout << "It is a " << question_tree.data() << ".\n";

         }  

         done = true;
      }
      else
      {
         do
         {
            cout << question_tree.data() << " (y/n): ";
            cin >> response;
         } 
         while (response != "y" && response != "n");

         if (response == "y")
         {
            question_tree = left;         
         }
         else
         {
            question_tree = right;         
         }         
      }
   }
}