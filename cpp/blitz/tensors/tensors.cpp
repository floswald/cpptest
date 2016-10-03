


#include <iostream>
#include <vector>
#include <blitz/array.h>

using namespace std;
using namespace blitz;

int main(){

	Array<double,3> A(shape(2,2,2),FortranArray<3>());
	A = 0.25; 

	Array<double,2> B(shape(2,2),FortranArray<2>());
	B = 0,0,1,1; 

	cout << A << endl;

	firstIndex i;
	secondIndex j;
	thirdIndex k;

	Array<double,3> C(A(i,j,k) + B(k,j));

	cout << "C " << endl;
	cout << C << endl;
	cout << "C(:,1,:) " << endl;
	cout << C(Range::all(),1,Range::all()) << endl;
	cout << "C(:,2,:) " << endl;
	cout << C(Range::all(),2,Range::all()) << endl;

return 0;
}
