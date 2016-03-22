

#include <armadillo>
#include <stdio.h>

using namespace arma;

int main() {

	// this line is in example and fails:
	//imat A = randu<imat>(6, 7, distr_param(-10, +20));
	//
	//should be this instead:
	mat A = randu<mat>(6, 7);

	std::cout << "A=" << A << std::endl;
	std::cout << "A(2,:)=" << A.row(2) << std::endl;
	arma::rowvec x =  A.row(2);
	for (int i=0;i<x.size();i++){
		std::cout << "x(" << i << ")=" << x(i) << std::endl;
	}


	return 0;

}

