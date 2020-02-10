#ifndef TESTSCORES_H
#define TESTSCORES_H
#include <string>

class TestScores
{
    public:

        std::string studentName;
        int numberOfTests;
        double *testScoresArrayPointer;
    	double average;
    	static const int maxTestScore = 100;
        static const int minTestScore = 0;

    	void setStudentData();
    	int getNumberOfTests();
    	void createArray(int);
    	void setTestScores(double []);
    	void selectionSort(double [], int);
    	double calculateAverage();
    	void displayStudentData();
    	void deleteDynamicArray(double *arr);

};

#endif // TESTSCORES_H
