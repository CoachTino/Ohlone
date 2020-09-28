#ifndef CREATEMENU_H
#define CREATEMENU_H

	class createMenu{

		private:

			int choiceOne, choiceTwo, choiceThree;
			std::string name;


		public:
			createMenu();

			void greetTheUser();
			void setUserName();
			std::string getUsersName();

			void createAlgorithmMenu();
			void createTextFileMenu();
			void takeUserInput(int &);

	};

#endif