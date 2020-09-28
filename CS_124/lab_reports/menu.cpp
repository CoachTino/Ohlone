#include <iostream>

#include "menu.h"

using std::cout;
using std::cin;
using std::endl;

// create menu as a base class
// create textFiles as a derived class
// create sorting algorithms as derived class
// create greeting/program description as derived class

	menu::menu(){

		setUserName();
		greetTheUser();
	}

	void menu::greetTheUser(){
	
		cout << "\nWassup " << getUsersName() << "!" << endl;
		cout << "\nSo this program will ask you to choose a text file \n";
		cout << "and let you choose 2 of 5 sorting algorithms\n";
		cout << "to sort the words in the file. That way you can see\n";
		cout << "which sorting algorithm is the fastest. You'll also\n";
		cout << "be able to choose if you want to see the first 50\n";
		cout << "items or last 50 items in the dataset. Lastly,\n";
		cout << "you'll have all of the results printed out to you!\n";
			

	}

	void menu::setUserName(){

		cout << "\nHello! What's your name? ";
		cin >> name;
	}
	
	std::string menu::getUsersName(){

		return name;
	}