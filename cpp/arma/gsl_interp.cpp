

#include <armadillo>
#include <stdio.h>

using namespace arma;

int main() {

	mat A = randu<mat>(6, 2);

	double * ptr = A.memptr();

	for (int i=0;i<A.size();i++){
		std::cout << "A(i)=" << ptr[i];
	}

	return 0;

}

