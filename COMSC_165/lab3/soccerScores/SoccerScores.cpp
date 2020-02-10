#include "SoccerScores.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

	// constructor initializes team size to 12
	// creates array of soccerPlayer with 12 elements
	SoccerScores::SoccerScores(){

		teamSize = 12;
		soccerTeam = new SoccerPlayer[teamSize];
	}

	// read user input for soccer play data
	void SoccerScores::getPlayerData(SoccerPlayer team[], int SIZE){

		cout << "Enter the name for each player on the team "
			 << "along with their number and points scored."
			 << endl;
		for (int i = 0; i < SIZE; ++i){

			cout << "\nPlayer " << (i+1) << endl;

			cout << "Name: ";
				cin >> team[i].name;
			cout << "Number: ";
				cin >> team[i].jerseyNumber;
				while (team[i].jerseyNumber < 0){
                    cout << "ERROR : You must enter a positive number." << endl;
                    cout << "Re-enter a valid number: ";
                    cin >> team[i].jerseyNumber;
                    cout << "\n";
                }
			cout << "Goals Scored: ";
				cin >> team[i].goalsScored;
				while (team[i].goalsScored < 0){
                    cout << "ERROR : You must enter a positive number." << endl;
                    cout << "Re-enter a valid number: ";
                    cin >> team[i].goalsScored;
                }
		}
	}

	// print out a table that displays
	// player names, numbers, points scored
	void SoccerScores::calculateAndDisplayTeamData(SoccerPlayer team[], int SIZE){

		cout << "\nPlayer Name\tJersey Number\tGoals Scored" << endl;
        for (int i = 0; i < SIZE; ++i){
        	cout << team[i].name
        		 << "\t\t"
        		 << team[i].jerseyNumber
        		 << "\t\t"
        		 << team[i].goalsScored
        		 << endl;
        }
        int mostGoalsScoredIndex = 0;
        for (int i = 0; i < SIZE; ++i){

        	if (team[i].goalsScored > mostGoalsScoredIndex){

        		mostGoalsScoredIndex = i;
        	}
        }
        cout << "\n"
        	 << team[mostGoalsScoredIndex].name
        	 << " #"
        	 << team[mostGoalsScoredIndex].jerseyNumber
        	 << " scored the most goals on the team." << endl;

        // print out player with most points scored

	}

    // delete dynamic array
    void SoccerScores::deleteDynArray(SoccerPlayer team[]){

        delete [] team;
    }

