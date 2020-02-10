#include <iostream>

using namespace std;

int main(){

    int sum;

    for (int i = 2; i <= 1000; i+=2){
        sum += i;
    }
    cout << "sum: " << sum;
}
