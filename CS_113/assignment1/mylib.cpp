#include "mylib.h"
#include <iostream>
#include <string>


	bool Boolean::conjunction(bool& a, bool& b){

		return (a && b);
	}	

	bool Boolean::disjunction(bool& a, bool& b){

		return (a || b);
	}

	bool Boolean::xjunction(bool& a, bool& b){

		return (a ^ b);
	}

	bool Boolean::negation(bool& a){

		return (!a);
	}


