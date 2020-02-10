#include "CourseGrade.h"
#include <iostream>
#include <string>

using namespace std;

	int main(){

		CourseGrade cgo;
		cgo.setNumberOfStudents();
		cgo.setNumberOfTests();
		cgo.setStudentArray(cgo.numberOfStudents);
		cgo.createTestArray(cgo.studentGroup, cgo.numberOfStudents, cgo.numberOfTests);
		cgo.setStudentData(cgo.studentGroup, cgo.numberOfStudents, cgo.numberOfTests);
		cgo.calculateAverageTestScores(cgo.studentGroup, cgo.numberOfStudents, cgo.numberOfTests);
		cgo.setStudentGrade(cgo.studentGroup, cgo.numberOfStudents);
		cgo.displayStudentData(cgo.studentGroup, cgo.numberOfStudents);
		cgo.deleteDynArray(cgo.studentGroup);

		return 0;
	}
