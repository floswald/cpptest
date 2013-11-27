#include <iostream>
#include <cstdlib>
#include <blitz/array.h>
using namespace std;
using namespace blitz;

int main(int argc, char *argv[])
{
	 firstIndex i;
	 secondIndex j;
	 thirdIndex k;

	 Array<double,2> A(2,2);
	 Array<double,2> G(2,2);
	 Array<double,2> R(2,2);

	 A=1;
	 G = 0.3,0.7,0.4,0.6;
	 cout << "G = " << endl;
	 cout << G << endl;

	 double trans[] = {0.3,0.7,0.4,0.6};
	 Array<double,2> Gmapped(trans,shape(2,2),neverDeleteData);
	 cout << "Gmapped = " << endl;
	 cout << Gmapped << endl;

	 Array<double,2> Gfort(trans,shape(2,2),neverDeleteData,FortranArray<2>());
	 cout << "Gfort = " << endl;
	 cout << Gfort << endl;

	 Array<double,3> C(2,2,2);

	 C = A(i,j) * G(k,j);

	 cout << "C = " << endl;
	 cout << C << endl;
// different views
//
	 cout << "different views " << endl;

	 cout << "C(0,:,:) = " << endl;
	 cout << C(0,Range::all(),Range::all()) << endl;

	 cout << "C(1,:,:) = " << endl;
	 cout << C(1,Range::all(),Range::all()) << endl;

	 cout << "C(:,0,:) = " << endl;
	 cout << C(Range::all(),0,Range::all()) << endl;

	 cout << "C(:,1,:) = " << endl;
	 cout << C(Range::all(),1,Range::all()) << endl;

	 cout << "C(:,:,0) = " << endl;
	 cout << C(Range::all(),Range::all(),0) << endl;
	 
	 cout << "C(:,:,1) = " << endl;
	 cout << C(Range::all(),Range::all(),1) << endl;

	 cout << "different partial reductions. note can only reduce over last." << endl;
	 R = sum(C(i,k,j),k);
	 
	 cout << "sum(C(i,k,j),j) = " << endl;
	 cout <<  R  << endl;
	 


	 return(0) ;

 }
