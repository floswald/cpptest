

#include <armadillo>
#include <stdio.h>

using namespace arma;

int main() {

	// this line is in example and fails:
	//imat A = randu<imat>(6, 7, distr_param(-10, +20));
	//
	//should be this instead:
	mat A = randu<mat>(6, 2);

	std::cout << A << std::endl;
	std::cout << max(A) << std::endl;
	printf("A = %4.8f",A.max());

	return 0;

}

