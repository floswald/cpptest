
#include <iostream>
#include <armadillo>
#include "interp2d.h"
#include "interp2d_spline.h"
#include <gsl/gsl_spline.h>

// simulator class
// has std::vectors of pointers to arma matrices 
// as data members
// member functions are the pieces to insert in the 
// simulation loop
class Simulate {
	private:
		// sizes
		int na, ny, np, nm, nh;
		// computation arrays
		double *v1arr, *v2arr, *v1mat, *v2mat, *v1arr_m, *v2arr_m;
		// interpolation objects
		gsl_spline *spline1D_a;
		gsl_spline *spline1D_m;
		interp2d_spline *interp2D;
		gsl_interp_accel *x1, *y2, *xa, *xm;

		// data: value functions
		std::vector<arma::mat * > Vals_OWN_BK0;
		std::vector<arma::mat * > Vals_OWN_BK7;
		std::vector<arma::mat * > Vals_OWN_BK13;
		std::vector<arma::mat * >::iterator armait;
		std::vector<std::vector<arma::mat * > > Vals_RENT;

	public:
        Simulate(int na_, int ny_, int np_, int nm_, int nh_,
				std::vector<arma::mat * > Vals_OWN_BK0_,
				std::vector<arma::mat * > Vals_OWN_BK7_,
				std::vector<arma::mat * > Vals_OWN_BK13_,
				std::vector<std::vector<arma::mat * > > Vals_RENT_); 
		int Get6DIdx(int ia, int iy, int ip, int im, int ih, int age);
		int Get4DIdx(int ia, int iy, int ip, int age);
		int Get3DIdx(int iy, int ip, int age);
		void show( int which );
};

Simulate::Simulate(int na_, int ny_, int np_, int nm_, int nh_,
				std::vector<arma::mat * > Vals_OWN_BK0_,
				std::vector<arma::mat * > Vals_OWN_BK7_,
				std::vector<arma::mat * > Vals_OWN_BK13_,
				std::vector<std::vector<arma::mat * > > Vals_RENT_) : 
	            na(na_), ny(ny_), np(np_), nm(nm_), nh(nh_),
	            Vals_OWN_BK0(Vals_OWN_BK0_),
	            Vals_OWN_BK7(Vals_OWN_BK7_),
	            Vals_OWN_BK13(Vals_OWN_BK13_){
				}
	
int Simulate::Get6DIdx(int ia, int iy, int ip, int im, int ih, int age){
	int r;
	r = ia + na * ( iy + ny * (ip + np * (im + nm * (ih + nh * age ) ) ) );
	return(r);
}
int Simulate::Get4DIdx(int ia, int iy, int ip, int age){
	int r;
	r = ia + na * ( iy + ny * (ip + np * age ) );
	return(r);
}
int Simulate::Get3DIdx(int iy, int ip, int age){
	int r;
	r = iy + ny * (ip + np * age);
	return(r);
}

void Simulate::show (int which) {

	if (which==1){
		std::cout << "showing Vals_OWN_BK0" << std::endl;
		std::cout << std::endl;
		for( armait=Vals_OWN_BK0.begin();
			 armait!=Vals_OWN_BK0.end();
			 armait++){
			 std::cout << "Vals_OWN_BK0.at(" << std::distance(Vals_OWN_BK0.begin(),armait) << ") = " << *(*armait) << std::endl;
		}
	} else if (which==2){
		std::cout << "showing Vals_OWN_BK7" << std::endl;
		std::cout << std::endl;
		for( armait=Vals_OWN_BK7.begin();
			 armait!=Vals_OWN_BK7.end();
			 armait++){
			 std::cout << "Vals_OWN_BK7.at(" << std::distance(Vals_OWN_BK7.begin(),armait) << ") = " << *(*armait) << std::endl;
		}
	}
}
	

