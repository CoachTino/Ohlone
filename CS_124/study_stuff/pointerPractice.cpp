// practice assignment to get a refresher on *, &, pointer, pass by reference, pass by pointer
#include <iostream>

	int printStuff(int *, int &, int);

	int main(){

		std::cout << "\nLet's get some pointer practice too.\n";

		int start = 1337;

		// pointers can only store memory addresses
		int* pointer=  &start;

		// you can initialize some data by 
		// assigning it to the VALUE that is 
		// being stored in the memory address
		// that the pointer is holding
		int x = *pointer;

		std::cout << printStuff(pointer, start, x)
				  << " (local to function call)\n";


		std::cout << "\nMain Method: " 
				  << std:: endl;
		std::cout << "Start "
				  << start
				  << std::endl;

		std::cout << "pointer "
				  << pointer
				  << std::endl;

		std::cout << "new int "
				  << x
				  << std::endl;

		return 0;
	}

	// when you use the address of operator (&) 
	// actually passing the memory adress location 
	// into the function as a parameter
	// so when you modify this with arithmetic or 
	// changing the value any way, the compiler is
	// updating the value at THAT location

	// where as when you pass a parm without the &
	// operator, you're passing a "copy" of that value
	// so any change you make to that will be local
	// to the function. this can be seen with the example
	// of this program. an integer that is assigned a value from
	// a pointer that is storing the memory address of an 
	// integer with the value of 1337 is the third argument without
	// the & operator. we modify that value in the function
	// and print out the return value in the main (function call)
	// we then print out the variable that was declared in main
	// and notice the value is not the same as it was when 
	// modified inside of the function call

	// likewise, the integer variable start is printing out
	// 1338 in the main method because its memory address
	// was passed to the funciton. so when the arithmetic was
	// performed on it, the new value was saved at the memory
	// address that was passed to the function
	int printStuff(int* x, int& y, int z){
		std::cout << "\nFunction call:" 
				  << std::endl;
		std::cout << "z "
				  << z
				  << std::endl;

		std::cout << "x "
				  << x
				  << std::endl;

		std::cout << "y "
				  << y
				  << std::endl;


		std::cout << "\nReturn Value: ";

		z+=1;
		//y+=1;
		x = x +1;
		return z;
	}