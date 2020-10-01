#include "textFileNames.h"
#include <string>

using std::string;

	const string textFileNames::getAlice(){

		return alice;
	}

	const string textFileNames::getHomer(){

		return homer;
	}
	
	const string textFileNames::getHuckleBerryFinn(){

		return huckleBerryFinn;
	}

	const string textFileNames::getLeviathan(){

		return leviathan;
	}

	const string textFileNames::getMlkSpeech(){

		return mlkDream;
	}

	void textFileNames::setFileName(string name){

		fileName = name;
	}

	string textFileNames::getFileName(){

		return fileName;
	}