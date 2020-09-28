#ifndef TEXTFILENAMES_H
#define TEXTFILENAMES_H
#include <string>

using std::string;

	class textFileNames{

		private:

			const string alice = "alice.txt";
			const string homer = "homer.txt";
			const string huckleBerryFinn= "huckleberry_finn.txt";
			const string leviathan= "leviathan.txt";
			const string mlkDream= "mlk_dream.txt";
		
		public:

			const string getAlice();
			const string getHomer();
			const string getHuckleBerryFinn();
			const string getLeviathan();
			const string getMlkSpeech();
	};
	
#endif