#include <iostream>
#include <iomanip>

using namespace std;

int main(){
            double x = 24.1234;
            double y = 15.1234;
            float   total = x + y;

            cout << "Variable x contains: " << x << endl;
            cout << "Variable y contains: " << y << endl;
            cout << fixed << setprecision(2);

            return 0;
}
