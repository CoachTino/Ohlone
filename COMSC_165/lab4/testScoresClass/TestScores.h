#ifndef TESTSCORES_H
#define TESTSCORES_H

class TestScores{
    public:
        // constructor accepts array of test scores as parm
        TestScores(double [], int);

        // calculate average
        double findAverage(double [], int);

        // declare exception class
        class InvalidScore{};
};

#endif // TESTSCORES_H
