

#include <armadillo>
#include <stdio.h>

using namespace arma;

int main() {

	mat A;
	A.zeros(2,5);

	std::cout << A << std::endl;
	return 0;

}

