

#include <armadillo>
#include <stdio.h>

using namespace arma;

int main() {

	// this line is in example and fails:
	//imat A = randu<imat>(6, 7, distr_param(-10, +20));
	//
	//should be this instead:
	imat A = randi<imat>(6, 7, distr_param(-10, +20));

	std::cout << A << std::endl;

	return 0;

}

