#ifndef CREATEMENU_H
#define CREATEMENU_H

#include "fileManip.h"
#include <vector>
#include <fstream>

	class createMenu{

		private:

			int textOptionOne, textOptionTwo, textOptionThree;
			int algorithmOptionOne, algorithmOptionTwo; 
			std::string name;


		public:
			createMenu();

			void greetTheUser();
			void setUserName();
			std::string getUsersName();

			void createAlgorithmMenu(fileManip &, std::vector<std::string> &, bool &secondPass);
			void createTextFileMenu();
			void takeUserInput(int &);
			void processAlgorithmInput(fileManip &, std::vector<std::string> &, int &);
			void processTextFileInput(fileManip &, fstream &, int &);

	};

#endif