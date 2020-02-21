#include<stdio.h>

int add(int a, int b, int c){

	int xx = a+10;
	int yy = b+20;
	int zz = c+30;

	int n = 10;
	char* k = (char*) &n;
	for(int i = 0; i <1024; i++){

	*k=0;
	k++;
	}

	return xx+yy+zz;
}

int main(int argc, char** argv){
	
	int j = add(10,20,30);
	return 0;
}