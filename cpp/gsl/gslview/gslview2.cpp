
#include <iostream>
#include <cstdlib>
#include <blitz/array.h>
#include <gsl/gsl_linalg.h>

using namespace std;

int main(int argc, char *argv[])
{
	   blitz::Array<double, 2> X(5,2);
       X = 1,2,3,4,5,
		   6,7,8,9,10;

       cout << "A : " << X << endl;
	   cout << "A data: " << X.data() << endl;

		// .data() returns a pointer to the "first" elemnt in the array
		// how to get the first element in dimention j?


	   gsl_vector_view m1 = gsl_vector_view_array (X(blitz::Range::all(),0).data(), X.extent(blitz::firstDim));
	   gsl_vector_view m2 = gsl_vector_view_array (X(1,blitz::Range::all()).data(), X.extent(blitz::secondDim));

   	   cout << "m1 vector data address: " << &m1.vector.data << endl;
   	   cout << "m2 vector data address: " << &m2.vector.data << endl;

	   cout << "X( ,0) vector data values: " << std::endl;
       for( int i = 0; i < m1.vector.size ; ++i ){
	       cout << gsl_vector_get(&m1.vector, i) << endl;
	   }
	   
	   cout << "X(1, ) vector data values: " << std::endl;
       for( int i = 0; i < m2.vector.size ; ++i ){
	       cout << gsl_vector_get(&m2.vector, i) << endl;
	   }

	   cout << endl;
	   cout << "this does obviously not work. data is not contiguous." << endl;
	   cout << endl;

	   cout << "old-fashioned way: just copy values into an array." << endl;
	   cout << endl;

	   int n = X.extent(blitz::firstDim);
	   int m = X.extent(blitz::secondDim);
	   double t1 [n];
	   double t2 [m];

	   for (int i=0; i<n; ++i) t1[i] = X(i,0);
	   for (int i=0; i<m; ++i) t2[i] = X(2,i);

	   cout << "X( ,0) vector data values: " << std::endl;
	   for (int i=0; i<n; ++i){
		   cout << t1[i] << endl;
	   }
	   
	   cout << "X(2, ) vector data values: " << std::endl;
	   for (int i=0; i<m; ++i){
		   cout << t2[i] << endl;
	   }

	   cout << endl;
       cout << "old X: " << X << endl;
	   cout << endl;
	   cout << "change t1 and stick back into X" << endl;
	   cout << endl;

	   for (int i=0; i<n; ++i) t1[i] = t1[i] + i;
	   for (int i=0; i<n; ++i) X(i,0) = t1[i];

	   cout << "changed X: " << endl;
	   cout << X << endl;


	  return EXIT_SUCCESS;
}
