

#include <armadillo>

int main(){

	//arma::imat A = arma::randu<arma::imat>(4,5,arma::distr_param(0,5) );
	arma::imat A = arma::randu<arma::imat>(4,5 );

	std::cout << "A " << A << std::endl;

	return 0;

}
