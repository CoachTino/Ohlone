#include "Student.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

	void Student::getStudentData(){

		for(int i = 0; i < numberOfStudents; i++){

			cout << "\nEnter student " << i+1 << "'s name: ";
			cin >> studentNames[i];

			cout << "Enter their 4 test scores: ";
			for (int j = 0; j < numberOfTests; j++){

				cin >> studentTestScore[i][j];
				while (studentTestScore[i][j] > maxTestScore || studentTestScore[i][j] < minTestScore){
					cout << "\nInvalid score. Test score needs to be between 0 and 100." << endl;
					cout << "Re-enter test score: ";
					cin >> studentTestScore[i][j];
				}
			}
		}
	}

	void Student::findLowestScoreAndCalculateAverage(){

		int lowestScore = 0;
		for (int i = 0; i < numberOfStudents; i++){

            lowestScore = studentTestScore[i][0];
			averageTestScores[i] = 0;

			for (int j = 0; j < numberOfTests; j++){

                if(lowestScore >= studentTestScore[i][j]){

                    lowestScore = studentTestScore[i][j];
                    averageTestScores[i] += studentTestScore[i][j];
                }
			}
            averageTestScores[i] -= lowestScore;
                cout << "\ndebug avgscoreindex " << i << ": " << averageTestScores[i];
            averageTestScores[i] /= 3;
            studentLetterGrade[i] = getStudentGrade(averageTestScores[i]);
		}
	}

	void Student::displayStudentData(){

		cout << "\nStudent Name\tAverage Score\tLetter Grade" << endl;
		for (int i = 0; i < numberOfStudents; ++i){

			cout.setf(ios::fixed, ios::floatfield);
			cout.precision(2);
			cout << studentNames[i] << "\t\t" << setprecision(2) << averageTestScores[i] << "\t\t" << studentLetterGrade[i] << endl;
		}
	}

    char Student::getStudentGrade(double x){

    	if(x >= 90 && x <= maxTestScore){

    		return 'A';

    	}else if(x >= 80 && x < 90){

    		return 'B';

    	}else if(x >= 70 && x < 80){

    		return 'C';

    	}else if(x >= 60 && x < 70){

    		return 'D';

    	}else{
    		return 'F';
    	}
    }
