// File: students_movies.cpp
// Author:Valentino Lei'a
// cs102 Online
// Date: 4/19/18
// Description: used to gather statistical data about the number
//              of movies college students see in a month


#include <iostream>
#include <string>

using namespace std;

    // prototype functions
    int *createArray(int);
    void *enterData(int *, int);
    float findAverage(int *, int);
    void *showArray(int *, int);

    int main(){

                // declare variables
                int *dynamicArray;
                int students;
                float average;

                // get user input
                cout << "How many students were surveyed? ";
                cin >> students;
                while (students <= 0){
                       cout << "ERROR : You must enter a positive non-zero integer." << endl;
                       cout << "Re-enter a valid integer: ";
                       cin >> students;
                }

                dynamicArray = createArray(students);
                    //this function creates a dynamic array
                    //and returns its pointer

                enterData(dynamicArray, students);
                    //use 'pointer' notation in this function to
                    //access array elements
                    //accept only numbers 0-100 for movie seen

                average = findAverage(dynamicArray, students);
                    //use 'pointer' notation in this function to
                    //access array elements

                cout << "------------" << endl << endl;
                cout << "The array is:" << endl;
                showArray(dynamicArray, students);

                cout << endl;
                cout << "The average is " << average << ".\n";

                // deallocate array
                delete [] dynamicArray;
                return 0;
            }

     // createArray() creates a dynamic array with the amount of indexes passed
     // in as a parameter and returns the pointer to the dynamic array
     int *createArray(int f_students){

                int *arrayPointer = new int[f_students];
                return arrayPointer;
     }

     // enterData() takes user input for movies watched and
     // stores that data inside of the dynamic array created in createArray()
     void *enterData(int *dynamicArray, int f_students){
            for (int i = 0; i < f_students; i++){

                cout << "How many movies were seen by each student: " << endl;
                cin >> dynamicArray[i];
                while (dynamicArray[i] < 0 || dynamicArray[i] > 100){
                        cout << "ERROR : You must enter a number between 0 and 100." << endl;
                        cout << "Re-enter a number: ";
                        cin >> dynamicArray[i];
                }
            }
    }

    // findAverage() calculates the average of the movies watched by the students and returns that value
    float findAverage(int *dynamicArray, int f_students){

        int avrg = 0;

        for(int i = 0; i < f_students; i++){

            avrg += dynamicArray[i];
        }
        avrg = avrg / f_students;
        return avrg;
    }

    // showArray() prints out the value of each index of the dynamic array
    void *showArray(int *dynamicArray, int f_students){

        for(int i = 0; i < f_students; i++){

            cout << "the value inside of dynamicArray index [" << i  << "]" << " is " << dynamicArray[i] << endl;
        }
    }
