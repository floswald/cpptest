
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
	 fourthIndex l;

	 Array<double,3> A(2,2,2,FortranArray<3>());
	 Array<double,2> G(2,2,FortranArray<2>());
	 Array<double,3> R(2,2,2,FortranArray<3>());

	 A=1;
	 G = 0.3,0.4,0.7,0.6;
	 cout << "G = " << endl;
	 cout << G << endl;

	 cout << "A = " << endl;
	 cout << A << endl;
	 cout << endl;
	 Array<double,4> C(2,2,2,2,FortranArray<4>());

	 C = A(i,j,k) * G(l,j);   // C(i,j,k,l)

	 cout << "C(i,j,k,l) = A(i,j,k) * G(l,j) =  " << endl;
	 cout << C << endl;
// different views
//
	 cout << "different views " << endl;

	 cout << "conditional distribution A*G given l=1 in G(:,l)" << endl;
	 cout << endl;
	 cout << "C(1,:,1,1) = " << endl;
	 cout << C(1,Range::all(),1,1) << endl;

	 cout << "conditional distribution A*G given l=2 in G(:,l)" << endl;
	 cout << endl;
	 cout << "C(1,:,1,2) = " << endl;
	 cout << C(1,Range::all(),1,2) << endl;

	 cout << "conditional expectation is sum over second dimension." << endl;
	 cout << endl;
	 cout << "R = sum(C(i,l,k,j),l)" << endl;
	 R = sum(C(i,l,k,j),l);
	 
	 cout << "sum(C,l) = " << endl;
	 cout <<  R  << endl;
	 


	 return(0) ;

 }
