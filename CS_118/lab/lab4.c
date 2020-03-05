// c code to be invoked by assembly
#include <stdio.h>

	int foo(int, int, int, int);

	int main(){

		int x = foo(2,2,2,10);
		printf("result %d\n", x);

		return 0;
	}