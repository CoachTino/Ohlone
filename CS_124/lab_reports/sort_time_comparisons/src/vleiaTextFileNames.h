#ifndef VLEIATEXTFILENAMES_H
#define VLEIATEXTFILENAMES_H
#include <string>

using std::string;

	class vleiaTextFileNames{

		private:

			const string alice = "alice.txt";
			const string homer = "homer.txt";
			const string huckleBerryFinn= "huckleberry_finn.txt";
			const string leviathan= "leviathan.txt";
			const string mlkDream= "mlk_dream.txt";
			string fileName;

		public:

			const string getAlice();
			const string getHomer();
			const string getHuckleBerryFinn();
			const string getLeviathan();
			const string getMlkSpeech();
			void setFileName(string);
			string getFileName();

	};
	
#endif