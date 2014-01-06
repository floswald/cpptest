
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

	   blitz::TinyVector<int, 4> b(114);
	   cout << "Default constructed b :" << b << std::endl;
	   //Rcpp::IntegerVector d(4);
	   //d = Rcpp::IntegerVector::create(1,2,3,4);

 //      blitz::TinyVector<int,4> b(d(0),d(1),d(2),d(3));

	   //cout << d << endl;

	  return EXIT_SUCCESS;
}



//
//
// compile
//llvm-g++-4.2 -arch x86_64 -I/Library/Frameworks/R.framework/Resources/include -DNDEBUG 
//-W -I/usr/local/include -I/usr/local/include -I"/Library/Frameworks/R.framework/Versions/3.0/Resources/library/Rcpp/include"  
//-fPIC  -g3 -rdynamic -c RcppExports.cpp -o RcppExports.o
//
//link
//llvm-g++-4.2 -arch x86_64 -dynamiclib -Wl,-headerpad_max_install_names -undefined 
//dynamic_lookup -single_module -multiply_defined suppress -L/usr/local/lib -L/usr/local/lib
// -o bkPackage2.so RcppExports.o rcpp_hello_world.o solve.o 
// /Library/Frameworks/R.framework/Versions/3.0/Resources/library/Rcpp/lib/libRcpp.a 
// -L/usr/local/lib -lgsl -lgslcblas 
// /Library/Frameworks/R.framework/Versions/3.0/Resources/library/Rcpp/lib/libRcpp.a 
// -F/Library/Frameworks/R.framework/.. -framework R -Wl,-framework -Wl,CoreFoundation
