

#include <iostream>
#include <blitz/array.h>

using namespace std;
using namespace blitz;


Array<double,3> ArrayPow(Array<double,3>G,int p){
    if (p==2){
	return pow2(G);
}
}

int main(){

	Array<double,3> data(shape(2,2,4),FortranArray<3>());
	Array<double,3> data2(shape(2,2,4),FortranArray<3>());
	data = 2.1;
	
	cout << "data " << data << endl;
	data2 = pow2(data);
	data2 = ArrayPow(data,2);
	cout << "data^2 " << data2 << endl;
	data2 = pow5(data);
	cout << "data^5 " << data2 << endl;






	return 0;
}





