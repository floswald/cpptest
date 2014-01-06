

#include <armadillo>
#include <vector>
#include <blitz/array.h>

int main() {

	blitz::Array<double,3> A(blitz::shape(2,3,2),blitz::FortranArray<3>());
	A = 2;

	blitz::TinyVector<int,3> dims;
	dims = A.extent();

	arma::mat B(2*2, 3 );		// want to isolate 2nd dim

	for (int i1=0; i1<dims(0); i1++) {
	for (int i2=0; i2<dims(1); i2++) {
	for (int i3=0; i3<dims(2); i3++) {

		B(i1 + dims(0)*(i3) , i2 ) = A(i1+1,i2+1,i3+1);

	}}}

	std::cout << "arma" << B << std::endl;
	std::cout << "blitz" << A << std::endl;

	return( 0 );
}




