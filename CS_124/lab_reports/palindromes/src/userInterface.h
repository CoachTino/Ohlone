#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include "dataValidation.h"
#include "linkedList.h"
#include "fileInputAndOutput.h"

	class userInterface: public dataValidation{//, public fileInputAndOutput{

	private:

		int menuOption, textFileOption;

		std::string name;
		std::string userInputPalindrome;

	public:

		userInterface();

		void setUserName();
		std::string getUserName();
		void greetTheUser();

		void createMenu();
		void setUserInputPalindrome();
		void createTextFileMenu();
		void createOptionalTextFileMenu(fileInputAndOutput &);
		
		void createStackFromUserInputPalindrome(linkedList &);		
		void createQueueFromUserInputPalindrome(linkedList &);

		void repeat();

	};

#endif