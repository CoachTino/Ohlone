#ifndef VLEIACREATEMENU_H
#define VLEIACREATEMENU_H

#include "vleiaFileManip.h"
#include <vector>
#include <fstream>

	class vleiaCreateMenu{

		private:

			int textOptionOne, textOptionTwo, textOptionThree;
			int algorithmOptionOne, algorithmOptionTwo; 
			int printOptionOne, printOptionTwo;
			int repeatOption;
			std::string name, searchString;


		public:
			vleiaCreateMenu();

			void greetTheUser();
			void setUserName();
			std::string getUsersName();
			
			void createTextFileMenu();
			void createAlgorithmMenu(vleiaFileManip &, std::vector<std::string> &);
			void createPrintOutMenu(vleiaFileManip &,vector<string> vect);
			void createSearchMenu(vleiaFileManip &,vector<string> vect);
			void validateUserInput(int &);
			void validateUserInput(std::string &);
			void processAlgorithmInput(vleiaFileManip &, std::vector<std::string> &, int &, int &);
			void processTextFileInput(vleiaFileManip &, fstream &, int &);
			void repeatMenu();
	};

#endif