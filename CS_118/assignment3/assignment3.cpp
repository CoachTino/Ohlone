/*
Program: assignment3.cpp
Author: Valentino Lei'a
Online Class: cs118
Semester: Spring 2020
Description: Write an C++/C function to convert a hexadecimal string to a decimal number.
			 http://www.asciitable.com/ for reference to ascii/hex/decimal values
*/

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

/*
only need 2 ifs
if('0' -> 'a')
if('a' -> 'f')
then subtract 48
0 in ascii is 48

use string and constant char"12321"

*/

	// declare global variables
	const char a[4] = "cat";
	const char* b = "duh";
	string c = "coolstorybro";

	uint32_t d = a[0] - 48; 
	uint32_t e = b[0] - 48; 


	// driver code
	int main(){

		printf("trying it out: %s\n", "weirdtexthere");
		printf("a = %s\n", a);
		printf("b = %s\n", b);
		cout << c << endl;

		printf("d = %x\n", d);
		printf("e = %x\n", e);

		return 0;
	}
