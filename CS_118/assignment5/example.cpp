/*
Program: assignment5.cpp
Author: Valentino Lei'a
Online Class: cs118
Semester: Spring 2020
Description: Implement memory copy in assembly and compare it with C++/C memory copy.
			 Here is example of memory copy function in C/C++
*/

#include <stdio.h>
#include <string.h>

/*
1) memcpy() doesn’t check for overflow or \0
2) memcpy() leads to problems when source and destination addresses overlap
example code found here: https://www.geeksforgeeks.org/memcpy-in-cc/
*/

using namespace std;

	int main () {

	  char str1[] = "uwotm8";   
	  char str2[] = "wat";   
	  
	  puts("str1 before memcpy "); 
	  puts(str1); 
	  
	  /* Copies contents of str2 to sr1 */
	  memcpy (str1, str2, sizeof(str2)); 
	  
	  puts("\nstr1 after memcpy "); 
	  puts(str1); 
	  
	  return 0; 
	} 