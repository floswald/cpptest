

#include <iostream>
#include <vector>
#include <blitz/array.h>

using namespace std;
using namespace blitz;

int main(){

	Range all = Range::all();
	Array<int,3> data(shape(2,2,4),FortranArray<3>());
	Array<int,3> data2(shape(2,2,4),FortranArray<3>());
	data = 5;
	data2 = 10;
	
	cout << "data(1,:,:) " << data(1,all,all) << endl;
	cout << "data2(,:,:) " << data2(1,all,all) << endl;
	std::vector<blitz::Array<int,3> * > vec;
	vec.push_back( &data );
	vec.push_back( &data2 );

	// combine data(all,all,3) and data2(all,all,3)
	// into tmp's third dimension
	Array<int,3> tmp(shape(2,2,2),FortranArray<3>());

	tmp(all,all,1) = (*vec.at(0))(all,all,3);	// age 3 from data
	tmp(all,all,2) = (*vec.at(1))(all,all,3);	// age 3 from data2

	cout << "tmp(1,:,:) " << tmp(1,all,all) << endl;
	return 0;
}





