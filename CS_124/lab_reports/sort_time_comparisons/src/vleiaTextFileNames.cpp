#include "vleiaTextFileNames.h"
#include <string>

using std::string;

	const string vleiaTextFileNames::getAlice(){

		return alice;
	}

	const string vleiaTextFileNames::getHomer(){

		return homer;
	}
	
	const string vleiaTextFileNames::getHuckleBerryFinn(){

		return huckleBerryFinn;
	}

	const string vleiaTextFileNames::getLeviathan(){

		return leviathan;
	}

	const string vleiaTextFileNames::getMlkSpeech(){

		return mlkDream;
	}

	void vleiaTextFileNames::setFileName(string name){

		fileName = name;
	}

	string vleiaTextFileNames::getFileName(){

		return fileName;
	}