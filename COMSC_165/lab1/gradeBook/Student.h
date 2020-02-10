#ifndef STUDENT_H
#define STUDENT_H
#include <string>


    class Student {

        public:

                static const int numberOfStudents = 5;
                static const int numberOfTests = 4;
                static const int maxTestScore = 100;
                static const int minTestScore = 0;

                std::string studentNames[numberOfStudents];
                char studentLetterGrade[numberOfStudents];
                double studentTestScore[numberOfStudents][numberOfTests];
                double averageTestScores[numberOfStudents];

                void getStudentData();
                void calculateAverage();
                void displayStudentData();
                char getStudentGrade(double);
    };
#endif // STUDENT_H
