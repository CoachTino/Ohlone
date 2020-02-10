#ifndef COURSEGRADE_H
#define COURSEGRADE_H
#include <string>


// global structure of a student with attributes
struct Student{
	
	std::string name;	// student name
	int idNumber;		// student id number
	int *tests;			// pointer to a dynamic array of test scores
	double average;		// average test score
	char grade;			// course grade
};

class CourseGrade{

    public:
    
    	int numberOfStudents;    	
    	int numberOfTests;        
    	Student *studentGroup = nullptr;

        // read user input for # of students
        void setNumberOfStudents();

        // read user input for # of tests
        void setNumberOfTests();

        // dynamically allocate an array of student struct
        void setStudentArray(int);

        // dynamically allocate array for test scores
        void createTestArray(Student [], int, int);

        // ask user for student id number and test scores for each student
        // validate negative test scores
        void setStudentData(Student [], int, int);

        // calculate average test scores and store in struct average attribute
        void calculateAverageTestScores(Student [], int, int);

        // calculate final grade and store in struct grade attribute
        void setStudentGrade(Student [], int);

        // display student info in a table
        void displayStudentData(Student [], int);

        // delete dynamic array
        void deleteDynArray(Student []);
};

#endif // COURSEGRADE_H
