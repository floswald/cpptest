
#include <iostream>
#include <cstdlib>
#include <blitz/array.h>

using namespace std;
using namespace blitz;
int main() {
          Array<float,4> A(3,3,2,2);
          Array<float,3> A2(3,3,2);
		  Array<float,2> B(3,3);
          A = 1, 0, 0,
              2, 2, 2,
              1, 0, 0,
              1, 0, 0,
              2, 2, 2,
              1, 0, 0,
              1, 0, 0,
              2, 2, 2,
              1, 0, 0,
              1, 0, 0,
              2, 2, 2,
              1, 0, 0;
          B = 0;
	cout << "A = " << endl;
	cout << A << endl;
	cout << "B = " << endl;
	cout << B << endl;

	firstIndex  i;	
	secondIndex j;  
	thirdIndex  k;	

	A2 = A(Range::all(),Range::all(),Range::all(),1);

	B = max( A2(i,j,k), k );
	
	cout << "B = " << endl;
	cout << B << endl;

	  return EXIT_SUCCESS;
}
