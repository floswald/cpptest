#include <blitz/array.h>

#include <cmath>

using namespace blitz;

int main(){
	
	Array<double,2> A(6,6);
	A(Range(0,2),Range(0,2)) = 5;
	cout << "A = " << A << endl;

	A(0,5) = NAN;
	cout << "A = " << A << endl;

	cout << "min(A) = " << min(A) << endl;


	cout << "isnan(A(:,1)) = " << isnan(A(0,5)) << endl;
	
	A = quiet_NaN(float(0));
	cout << "min(A) = " << min(A) << endl;
	cout << "max(A) = " << max(A) << endl;

	return 0;

}
