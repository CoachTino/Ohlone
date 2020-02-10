#include <iostream>

using namespace std;

   	// declare function template
	template <class TUNA>

   	// returns lesser of two arguments passed in
	TUNA minimum(TUNA x, TUNA y){

        if (x < y){
            return x;
        }else
        return y;
    }

    //declare function template
    template <class WATERMELON>

    // returns greater of two arguments passed in
    WATERMELON maximum(WATERMELON x, WATERMELON y){

        if (x > y){
            return x;
        }else
        return y;
    }

	int main(){

		int x = 99;
		int y = 100;

		double a = 45.12;
		double b = 50.98;

		float pi = 3.1419238476;
		float c = 99.9999999999;

		cout << "minimum of 99 and 100 is: " << minimum(x, y) << endl;
		cout << "maximum of 45 and 50 is: " << maximum(a, b) << endl;
		cout << "minimum of 3.1419238476 and 99.9999999999 is: " << minimum(pi, c) << endl;
        cout << "maximum of 3.1419238476 and 99.9999999999 is: " << maximum(pi, c) << endl;

    	return 0;
}
