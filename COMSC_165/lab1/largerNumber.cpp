#include <iostream>

using namespace std;

int main(){

    int x, y;

    cout << "Enter two integers: ";
    cin >> x;
    cin >> y;
    if(x > y){
        cout << x << " is bigger than the other number.";
    }else{
        cout << y << " is bigger than the other number.";
    }
}
