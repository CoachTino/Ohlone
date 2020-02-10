#include <iostream>
#include "Student.h"

using namespace std;

int main()
{

    Student so;
    so.getStudentData();
    so.findLowestScoreAndCalculateAverage();
    so.displayStudentData();
    return 0;
}
