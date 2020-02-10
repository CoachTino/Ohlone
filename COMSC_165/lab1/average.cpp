#include <iostream>

using namespace std;

int main(){

    int x[4];
    int average = 0;
    cout << "Enter four integers: ";
    for(int i = 0; i < 4; i++){
        cin >> x[i];
        average += x[i];
    }
    cout << "average is: " << average;
}
