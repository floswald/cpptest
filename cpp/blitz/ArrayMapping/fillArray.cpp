
#include <iostream>
#include <cstdlib>
#include <blitz/array.h>
//#include <Rcpp.h>

using namespace std;
using namespace blitz;

int main(int argc, char *argv[])
{
	Array<double,1> pval(5,FortranArray<1>()); 
	Array<double,2> pint(5,2,FortranArray<2>());

	pval = 1,2,3,4,5;
	pint = 1,1.9,2.9,3.9,4.9,
     	   1.1,2.1,3.1,4.1,5;

	   cout << "pval =" << pval << std::endl;
	   cout << "pint = " << pint  << std::endl;

	   cout << "pint(:,1) = " << pint(Range::all(),1)  << std::endl;
	   cout << "pint(:,2) = " << pint(Range::all(),2)  << std::endl;


    Array<double,3> vbar(2,2,5,FortranArray<3>());
	thirdIndex ip;
    vbar = pval(ip);

	cout << "vbar = " << vbar  << std::endl;
	cout << "vbar(1,1,:) = " << vbar(1,1,Range::all())  << std::endl;
	cout << "vbar(1,2,:) = " << vbar(1,2,Range::all())  << std::endl;
	cout << "vbar(1,:,:) = " << vbar(1,Range::all(),Range::all())  << std::endl;
	  return EXIT_SUCCESS;
}



