#include <iostream>
#include "TestScores.h"
#include <string>

using namespace std;

	int main()
	{
			TestScores tso;

			tso.setStudentData();
			tso.createArray(tso.getNumberOfTests());
			tso.setTestScores(tso.testScoresArrayPointer);
            tso.selectionSort(tso.testScoresArrayPointer, tso.numberOfTests);
            tso.calculateAverage();
            tso.displayStudentData();
            tso.deleteDynamicArray(tso.testScoresArrayPointer);

	    return 0;
	}
