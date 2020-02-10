#include <iostream>
#include "SoccerScores.h"
#include <iomanip>
#include <string>

using namespace std;

	int main(){

	    SoccerScores sco;
	    sco.getPlayerData(sco.soccerTeam, sco.teamSize);
	    sco.calculateAndDisplayTeamData(sco.soccerTeam, sco.teamSize);
	    sco.deleteDynArray(sco.soccerTeam);

	    return 0;
	}
