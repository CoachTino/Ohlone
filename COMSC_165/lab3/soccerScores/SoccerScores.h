#ifndef SOCCERSCORES_H
#define SOCCERSCORES_H
#include <string>

class SoccerScores
{
    public:

    	struct SoccerPlayer{

    		std::string name;
    		int jerseyNumber;
    		int goalsScored;
    	};
    	int teamSize;
    	SoccerPlayer* soccerTeam;
        SoccerScores();
        void getPlayerData(SoccerPlayer [], int);
        void calculateAndDisplayTeamData(SoccerPlayer [], int);
        void deleteDynArray(SoccerPlayer []);
};

#endif // SOCCERSCORES_H
