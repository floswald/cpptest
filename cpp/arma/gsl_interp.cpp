

#include <armadillo>
#include <stdio.h>

using namespace arma;

int main() {

	vec A = linspace<vec>(0,1,10);

	double * ptr = A.memptr();

	for (int i=0;i<A.size();i++){
		std::cout << "A("<< i << ")=" << ptr[i] << std::endl;
	}

	return 0;

}

