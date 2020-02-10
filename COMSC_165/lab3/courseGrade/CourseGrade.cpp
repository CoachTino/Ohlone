#include "CourseGrade.h"
#include <iostream>
#include <string>

using namespace std;

    // read user input for # of students
	void CourseGrade::setNumberOfStudents(){

		cout << "How many students are in the class? ";
		cin >> numberOfStudents;
		while (numberOfStudents <= 0){
        	cout << "ERROR : You must enter a positive number." << endl;
           	cout << "Re-enter a valid number: ";
           	cin >> numberOfStudents;
        }
	}

    // read user input for # of tests
	void CourseGrade::setNumberOfTests(){

		if (numberOfStudents == 1){

			cout << "How many tests did that student take? ";
			cin >> numberOfTests;
			while (numberOfTests <= 0){
        		cout << "ERROR: Invalid number." << endl;
           		cout << "Re-enter a valid number: ";
           		cin >> numberOfTests;
        }
		}else{
			cout << "How many tests did each student take? ";
			cin >> numberOfTests;
			while (numberOfTests <= 0){
        		cout << "ERROR: Invalid number." << endl;
           		cout << "Re-enter a valid number: ";
           		cin >> numberOfTests;
           	}
		}
	}

    // dynamically allocate an array of student struct
	void CourseGrade::setStudentArray(int arrSize){

		studentGroup = new Student[arrSize];
	}

	void CourseGrade::createTestArray(Student arr[], int numStudents, int numTests){

		for (int i = 0; i < numStudents; ++i){

			arr[i].tests = new int[numTests];
		}
	}

	// ask user for student id number and test scores for each student
    // validate negative test scores
	void CourseGrade::setStudentData(Student arr[], int numStudents, int numTests){

		cout << "\nEnter each student's name, id number, and test score." << endl;
		for (int i = 0; i < numStudents; ++i){

			cout << "Student "
				 << (i+1)
				 << "'s' name: ";
			cin >> arr[i].name;
			cout << arr[i].name
				 << "'s id number: ";
			cin >> arr[i].idNumber;
			for (int j = 0; j < numTests; ++j){

				cout << arr[i].name
					 << "'s test"
					 << (j+1)
					 << ": ";
				cin >> arr[i].tests[j];
				while (arr[i].tests[j] < 0){
                    cout << "ERROR : You must enter a positive number." << endl;
                    cout << "Re-enter a valid number: ";
                    cin >> arr[i].tests[j];
                }
			}
			cout << endl;
		}
	}

	// calculate average test scores and store it in struct's average attribute
	void CourseGrade::calculateAverageTestScores(Student arr[], int numStudents, int numTests){

		for (int i = 0; i < numStudents; ++i){

			for (int j = 0; j < numTests; ++j){

				arr[i].average += arr[i].tests[j];
			}
			arr[i].average = arr[i].average / numberOfTests;
		}
	}

	// calculate final grade and store in struct's grade attribute
	void CourseGrade::setStudentGrade(Student arr[], int numStudents){

		int maxTestScore = 100;

		for (int i = 0; i < numStudents; ++i){

			if(arr[i].average >= 90 && arr[i].average <= maxTestScore){

	    		arr[i].grade =  'A';

	    	}else if(arr[i].average >= 80 && arr[i].average < 90){

	    		arr[i].grade =  'B';

	    	}else if(arr[i].average >= 70 && arr[i].average < 80){

	    		arr[i].grade =  'C';

	    	}else if(arr[i].average >= 60 && arr[i].average < 70){

	    		arr[i].grade =  'D';

	    	}else{

	    		arr[i].grade =  'F';
	    	}
		}
    }

    // display student data info in a table
    void CourseGrade::displayStudentData(Student arr[], int numStudents){

    	cout << "\nStudent Name\tID Number\tAverage Test Score\tCourseGrade" << endl;
    	for (int i = 0; i < numStudents; ++i){

    		cout << arr[i].name
    			 << "\t\t"
    			 << arr[i].idNumber
    			 << "\t\t"
    			 << arr[i].average
    			 << "\t\t\t"
    			 << arr[i].grade
    			 << endl;
    	}
    }

    // delete dynamic array
	void CourseGrade::deleteDynArray(Student arr[]){

        delete [] arr;
    }
