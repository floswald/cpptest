
#include <iostream>
#include <blitz/array.h>

using namespace std;
using namespace blitz;

int main(){

	Array<int,2> data(shape(2,4),FortranArray<2>());
	Array<int,2> d2;
	data = 1,2,3,4,
		   5,6,7,8;
	d2.reference(data);
	cout << "address of data " << &data << endl;
	cout << "address of d2   " << &d2 << endl;

return 0;
}
