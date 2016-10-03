
#include <blitz/array.h>
#include <random/discrete-uniform.h>


using namespace ranlib;

int main() {

	blitz::Array<int,1> A(20);
	DiscreteUniform<int> Disc( 10 );

	
	blitz::Array<int,1>::iterator it;
	for (it = A.begin();
	     it != A.end();
		 it ++){
		*it = Disc.random() + 1;
	}

	std::cout << "discrete random A = " << std::endl;
	std::cout << A << std::endl;

	return( 0 );
}


