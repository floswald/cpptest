

// can you stick an int or a bool
// into a std::vector<double> ?
//
// yes.

#include <vector>
#include <iostream>

int main(){

	std::vector<double> v;

	int x = 3;
	bool R = false;

	v.push_back( x );
	v.push_back( R );

	std::cout << "v[0] = " << v[0] << std::endl;
	std::cout << "v[1] = " << v[1] << std::endl;

	return(v[0]);

};
