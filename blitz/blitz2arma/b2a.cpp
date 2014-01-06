


#include <armadillo>
#include <blitz/array.h>

using namespace blitz;

int main(){

	Array<double,2> data(shape(2,4),FortranArray<2>());
	data = 1,2,3,4,
		   5,6,7,8;

	std::cout << "blitz" << data << std::endl;

	arma::mat A(data.dataFirst(),2,4,false);
	
	std::cout << "arma" <<  std::endl;
	std::cout << A << std::endl;

	Array<double,4> d4(shape(2,2,2,2),FortranArray<4>());
	d4 = 1,2,
		   3,4,
		   5,6,
		   7,8,
		   9,10,
           11,12,
           13,14,
           15,16;

	std::cout << "blitz d4" << d4 << std::endl;

	arma::mat A4(d4.dataFirst(),8,2,false);
	
	std::cout << "arma d4" <<  std::endl;
	std::cout << A4 << std::endl;

	
return 0;
}
