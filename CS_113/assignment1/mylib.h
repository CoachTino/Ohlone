#ifndef MYLIB_H
#define MYLIB_H

#include <iostream>
#include <string>

    class Boolean{

        public:

            bool conjunction(bool&, bool&);
            bool disjunction(bool&, bool&);            
            bool xjunction(bool&, bool&);
            bool negation(bool&);
            bool p[4] = {true, true, false, false};
            bool q[4] = {true, false, true, false};

            bool result[4];
            bool resultOne[4];
            bool resultTwo[4];
            bool resultThree[4];
    };

#endif

