

#include <armadillo>
#include <stdio.h>

using namespace arma;

int main() {

	vec X = linspace<vec>(0,1,10);
	vec Y = square(X);

	vec xx = linspace(0,1,20);
	vec yy;

	interp1(X,Y,xx,yy);

	arma::cout << "Y = " << Y << arma::endl;
	arma::cout << "yy = " << yy << arma::endl;

	vec xx2(1);
	vec yy2;
	xx2 = 0.99;

	interp1(X,Y,xx2,yy2);
	arma::cout << "yy2 = " << yy2 << arma::endl;
	xx2 = 0.44;

	interp1(X,Y,xx2,yy2);
	arma::cout << "yy2 = " << yy2 << arma::endl;
	return 0;

}

