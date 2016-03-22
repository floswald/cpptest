




#include <iostream>
#include <cstdlib>
#include <blitz/array.h>
#include <RInside.h>

using namespace std;

int main(int argc, char *argv[])
{
		RInside R(argc, argv);          // create an embedded R instance 

	Rcpp::IntegerVector d;

	   // Rcpp::List L; want to use
	   // L to output results to R.

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
//
//
//
//llvm-g++-4.2 -arch x86_64 -I/Library/Frameworks/R.framework/Resources/include -I/Library/Frameworks/R.framework/Versions/3.0/Resources/library/Rcpp/include  -I/Library/Frameworks/R.framework/Versions/3.0/Resources/library/RInside/include -mtune=core2 -g -O2 -Wall -I/usr/local/include -L/usr/local/lib -L/usr/opt/local/lib  export.cpp  -F/Library/Frameworks/R.framework/.. -framework R  -L/Library/Frameworks/R.framework/Resources/lib -lRblas -L/Library/Frameworks/R.framework/Resources/lib -lRlapack /Library/Frameworks/R.framework/Versions/3.0/Resources/library/Rcpp/lib/libRcpp.a /Library/Frameworks/R.framework/Versions/3.0/Resources/library/RInside/lib/libRInside.a -o export 
//llvm-g++-4.2 -arch x86_64 -I/Library/Frameworks/R.framework/Resources/include -I/Library/Frameworks/R.framework/Versions/3.0/Resources/library/Rcpp/include  -I/Library/Frameworks/R.framework/Versions/3.0/Resources/library/RInside/include -mtune=core2 -g -O2 -Wall -I/usr/local/include -L/usr/local/lib -L/usr/opt/local/lib  export.cpp  -F/Library/Frameworks/R.framework/.. -framework R   /Library/Frameworks/R.framework/Versions/3.0/Resources/library/Rcpp/lib/libRcpp.a /Library/Frameworks/R.framework/Versions/3.0/Resources/library/RInside/lib/libRInside.a -o export 
