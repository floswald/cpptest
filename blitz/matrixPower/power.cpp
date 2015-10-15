

#include <iostream>
#include <blitz/array.h>

using namespace std;
using namespace blitz;

int main(){

	Array<int,3> data(shape(2,2,4),FortranArray<3>());
	Array<int,3> data2(shape(2,2,4),FortranArray<3>());
	data = 2;
	
	cout << "data " << data << endl;
	data2 = pow2(data);
	cout << "data^2 " << data2 << endl;
	data2 = pow5(data);
	cout << "data^5 " << data2 << endl;






	return 0;
}





