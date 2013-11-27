
#include <iostream>
#include <cstdlib>
#include <blitz/array.h>
//#include <Rcpp.h>

using namespace std;

int main(int argc, char *argv[])
{
	   blitz::TinyVector<int, 4> a;
	   a = 1,2,3,4;

	   cout << "a =" << a << std::endl;
	   cout << "number of elements in a :" << a.numElements() << std::endl;
	   cout << "number of elements in a :" << a.length()  << std::endl;
	   cout << "access last elt of a with a(3) :" << a(3)  << std::endl;

	   //Rcpp::IntegerVector d(4);
	   //d = Rcpp::IntegerVector::create(1,2,3,4);

 //      blitz::TinyVector<int,4> b(d(0),d(1),d(2),d(3));

	   //cout << d << endl;

	  return EXIT_SUCCESS;
}



// compile with
// llvm-g++-4.2 -I/Library/Frameworks/R.framework/Resources/include
//  -I/usr/local/include -I"/Library/Frameworks/R.framework/Versions/3.0/Resources/library/Rcpp/include"
// tinyVector.cpp -o tiny
