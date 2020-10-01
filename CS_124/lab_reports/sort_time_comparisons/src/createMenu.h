#ifndef CREATEMENU_H
#define CREATEMENU_H

#include "fileManip.h"
#include <vector>
#include <fstream>

	class createMenu{

		private:

			int textOptionOne, textOptionTwo, textOptionThree;
			int algorithmOptionOne, algorithmOptionTwo; 
			int printOptionOne, printOptionTwo;
			int repeatOption;
			std::string name, searchString;


		public:
			createMenu();

			void greetTheUser();
			void setUserName();
			std::string getUsersName();
			
			void createTextFileMenu();
			void createAlgorithmMenu(fileManip &, std::vector<std::string> &);
			void createPrintOutMenu(fileManip &,vector<string> vect);
			void createSearchMenu(fileManip &,vector<string> vect);
			void validateUserInput(int &);
			void validateUserInput(std::string &);
			void processAlgorithmInput(fileManip &, std::vector<std::string> &, int &);
			void processTextFileInput(fileManip &, fstream &, int &);
			void repeatMenu();
	};

#endif