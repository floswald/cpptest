
#include <iostream>
#include <cstdlib>
#include <blitz/array.h>
#include <gsl/gsl_linalg.h>

using namespace std;

int main(int argc, char *argv[])
{
	   blitz::Array<double, 1> X(5);
       X = 1.08, 1.07, 0.97, 0.77, 0.84;
       cout << "A : " << X << endl;
	   cout << "A data: " << X.data() << endl;

	   gsl_vector_view m = gsl_vector_view_array (X.data(), X.extent(blitz::firstDim));

   	   cout << "m vector data: " << &m.vector.data << endl;
       for( int i = 0; i < m.vector.size ; ++i ){
	       cout << gsl_vector_get(&m.vector, i) << endl;
	   }
	  return EXIT_SUCCESS;
}
