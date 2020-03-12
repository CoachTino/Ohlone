// #libraries
#include <stdio.h>
#include <iostream>
using namespace std;
/*
int foobar(int a, int b, int c)
{
    int xx = a + 2;
    int yy = b + 3;
    int zz = c + 4;
    int sum = xx + yy + zz;

    return xx * yy * zz + sum;
}
*/

int main(){

	uint32_t* a = new uint32_t[3];
	cout << &a[0] << endl;
	cout << &a[1] << endl;
	cout << &a[2] << endl;

    return 0;
}