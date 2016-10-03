
#include <blitz/array.h>
#include <random/discrete-uniform.h>


using namespace ranlib;

int main() {

	blitz::secondIndex two;

	blitz::Array<double,2> A(3,3);
	A = 1.0,NAN,NAN,2,5,6,7,10,8;

	blitz::Array<double,1> res(3);

	blitz::Array<double,1> B(3);
	B = NAN,3,NAN;

	std::cout << "A = " << std::endl;
	std::cout << A << std::endl;

	std::cout << "max(A) = " << std::endl;
	std::cout << max(A) << std::endl;

	std::cout << "max(A,2) = " << std::endl;
	res = max(A,two);
	std::cout << res << std::endl;


	std::cout << "B = " << std::endl;
	std::cout << B << std::endl;

	std::cout << "max(AB = " << std::endl;
	std::cout << max(B) << std::endl;
	std::cout << maxIndex(B) << std::endl;
	return( 0 );
}


