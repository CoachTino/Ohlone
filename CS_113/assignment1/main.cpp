#include "mylib.h"

int main(){

	Boolean bo;

	/*************************
	* part 4a                *
	*************************/
	std::cout << std::endl;
	std::cout << "part 4. (a):" << std::endl;
	std::cout << "(p && q) || (!p || !q): " << std::endl;
	std::cout << "p     " 
			  << "q     " 
			  << "!p    " 
			  << "!q    " 
			  << "(!p || !q)   " 
			  << "(p && q)   "
			  << "(p && q) || (!p || !q)"
			  << std::endl;
	std::cout << "-----------------------------------"
			  << "-----------------------------------"
			  << std::endl;

	for(int i = 0; i < 4; i++){

		bo.resultOne[i] = bo.negation(bo.p[i]);
		std::cout << bo.p[i] << "     "
				  << bo.q[i] << "     "
				  << bo.resultOne[i] << "     ";


		bo.resultTwo[i] = bo.negation(bo.q[i]);

		std::cout << bo.resultTwo[i] << "     ";

		bo.result[i] = bo.disjunction(bo.resultOne[i], bo.resultTwo[i]);

		std::cout << bo.result[i] << "            ";

		bo.resultThree[i] = bo.conjunction(bo.p[i], bo.q[i]);

		std::cout << bo.resultThree[i]
				  << "          ";

		bo.result[i] = bo.disjunction(bo.result[i], bo.resultThree[i]);

		std::cout << bo.result[i]
				  << std::endl;
	}
	std::cout << "therefore: (p && q) || (!p || !q) is a tautology" << std::endl;
	std::cout << std::endl;


	/*************************
	* part 4b                *
	*************************/
	std::cout << std::endl;
	std::cout << "part 4. (b):" << std::endl;
	std::cout << "p || !p: " << std::endl;
	std::cout << "p     " << "!p     " << "p || !p  "<< std::endl;
	std::cout << "--------------------" << std::endl;
	for(int i = 0; i < 4; i++){

		bo.resultOne[i] = bo.negation(bo.p[i]);
		std::cout << bo.p[i] 
				  << "     "
				  << bo.resultOne[i] 
				  << "      ";

		bo.result[i] = bo.disjunction(bo.p[i], bo.resultOne[i]);
		std::cout << bo.result[i] 
				  << "     "
				  << std::endl;
	}
	std::cout << "therefore: p || !p is a tautology" << std::endl;
	std::cout << std::endl;



	/*************************
	* part 5a                *
	*************************/
	std::cout << std::endl;
	std::cout << "part 5. (a):" << std::endl;
	std::cout << "!(p || q): " << std::endl;
	std::cout << "p     " << "q     " << "p||q  " << "!(p||q)" << std::endl;
	std::cout << "-------------------------" << std::endl;

	for(int i = 0; i < 4; i++){

		bo.result[i] = bo.disjunction(bo.p[i], bo.q[i]);
		std::cout << bo.p[i] << "     " 
				  << bo.q[i] << "     " 
				  << bo.result[i] << "     "
				  << bo.negation(bo.result[i]) << "     "
				  << std::endl;
	}
	std::cout << std::endl;

	std::cout << "!p && !q: " << std::endl;
	std::cout << "p     " << "q     " << "~p    " << "~q    " << "(~p && ~q)" << std::endl;
	std::cout << "----------------------------------" << std::endl;

	for(int i = 0; i < 4; i++){

		bo.resultOne[i] = bo.negation(bo.p[i]);
		std::cout << bo.p[i] << "     "
				  << bo.q[i] << "     "
				  << bo.resultOne[i] << "     ";


		bo.resultTwo[i] = bo.negation(bo.q[i]);

		std::cout << bo.resultTwo[i] << "     ";

		bo.result[i] = bo.conjunction(bo.resultOne[i], bo.resultTwo[i]);

		std::cout << bo.result[i] << "     "
				  << std::endl;
	}
	std::cout << "therefore: !(p||q) is equal to (!p&&!q)" << std::endl;
	std::cout << std::endl;

	/*************************
	* part 5b                *
	*************************/
	std::cout << std::endl;
	std::cout << "part 5. (b):" << std::endl;
	std::cout << "!(p && q): " << std::endl;
	std::cout << "p     " << "q     " << "p||q  " << "!(p||q)" << std::endl;
	std::cout << "-------------------------" << std::endl;

	for(int i = 0; i < 4; i++){

		bo.result[i] = bo.conjunction(bo.p[i], bo.q[i]);
		std::cout << bo.p[i] << "     " 
				  << bo.q[i] << "     " 
				  << bo.result[i] << "     "
				  << bo.negation(bo.result[i]) << "     "
				  << std::endl;
	}
	std::cout << std::endl;

	std::cout << "!p || !q: " << std::endl;
	std::cout << "p     " << "q     " << "~p    " << "~q    " << "(~p && ~q)" << std::endl;
	std::cout << "----------------------------------" << std::endl;

	for(int i = 0; i < 4; i++){

		bo.resultOne[i] = bo.negation(bo.p[i]);
		std::cout << bo.p[i] << "     "
				  << bo.q[i] << "     "
				  << bo.resultOne[i] << "     ";


		bo.resultTwo[i] = bo.negation(bo.q[i]);

		std::cout << bo.resultTwo[i] << "     ";

		bo.result[i] = bo.disjunction(bo.resultOne[i], bo.resultTwo[i]);

		std::cout << bo.result[i] << "     "
				  << std::endl;
	}
	std::cout << "therefore: !(p&&q) is equal to (!p||q)" << std::endl;
	std::cout << std::endl;

	/*************************
	* part 5c                *
	*************************/
	std::cout << std::endl;
	std::cout << "part 5. (c):" << std::endl;
	std::cout << "!(!p): " << std::endl;
	std::cout << "p     " << "!p     " << "!(!p)  " << std::endl;
	std::cout << "------------------" << std::endl;

	for(int i = 0; i < 4; i++){

		bo.result[i] = bo.negation(bo.p[i]);
		std::cout << bo.p[i] 
				  << "     "
				  << bo.result[i] 
				  << "      ";

		bo.resultOne[i] = bo.negation(bo.result[i]);
		std::cout << bo.resultOne[i] 
				  << "     "
				  << std::endl;
	}
	std::cout << "therefore: !(!p) is equal to p" << std::endl;
	std::cout << std::endl;

	return 0;
}