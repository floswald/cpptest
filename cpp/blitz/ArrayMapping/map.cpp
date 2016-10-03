#include <iostream>
#include <cstdlib>
#include <blitz/array.h>
using namespace std;
using namespace blitz;

int main(int argc, char *argv[])
{
	// directly allocate an array
	 Array<double,2> G(2,2);
	 G = 0.3,0.7,0.4,0.6;
	 for (int i=0;i<2;i++){
	 	for (int j=0;j<2;j++){
		 cout << "G(" << i << "," << j << ")=" << endl;
		 cout << G(i,j) << endl;
	 	}
	 }

	 cout << "G = " << endl;
	 cout << G << endl;

	 // map an array from existing data
	 double trans[] = {0.3,0.7,0.4,0.6};
	 Array<double,2> Gmapped(trans,shape(2,2),neverDeleteData);
	 for (int i=0;i<2;i++){
	 	for (int j=0;j<2;j++){
		 cout << "Gmapped(" << i << "," << j << ")=" << endl;
		 cout << Gmapped(i,j) << endl;
	 	}
	 }

	 cout << "Gmapped = " << endl;
	 cout << Gmapped << endl;

	// map an array from existing data as a fortran array
	 Array<double,2> Gfort(trans,shape(2,2),neverDeleteData,FortranArray<2>());
 	 for (int i=1;i<3;i++){
	 	for (int j=1;j<3;j++){
		 cout << "Gfort(" << i << "," << j << ")=" << endl;
		 cout << Gfort(i,j) << endl;
	 	}
	 }

	 cout << "Gfort = " << endl;
	 cout << Gfort << endl;

	cout << "it seems FortranArray maps the data rowwise." << endl;

	// reorder data and map an array from existing data as a fortran array
	 double trans2[] = {0.3,0.4,0.7,0.6};
	 Array<double,2> Gfort2(trans2,shape(2,2),neverDeleteData,FortranArray<2>());
 	 for (int i=1;i<3;i++){
	 	for (int j=1;j<3;j++){
		 cout << "Gfort2(" << i << "," << j << ")=" << endl;
		 cout << Gfort2(i,j) << endl;
	 	}
	 }

	 cout << "Gfort2 = " << endl;
	 cout << Gfort2 << endl;

	 return(0) ;

 }
