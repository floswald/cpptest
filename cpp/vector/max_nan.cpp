

// can you stick an int or a bool
// into a std::vector<double> ?
//
// yes.

#include <vector>
#include <iostream>
#include <cmath>

int main(){

	std::vector<double> v;

	v.push_back( 3.0 );
	v.push_back( 4.5 );
	v.push_back( NAN );
	v.push_back( 4.5 );

	std::vector<double>::iterator wi;
	for (wi=v.begin();wi!=v.end();wi++) {
		std::cout << *wi << std::endl;
	}

	int index;

	wi    = std::max_element(v.begin(),v.end());
	index = std::distance(v.begin(),wi);

	std::cout << "max" << *wi << std::endl;
	std::cout << "index" << index << std::endl;

	v.clear();
	v.push_back( NAN );
	v.push_back( NAN );
	v.push_back( NAN );

	wi    = std::max_element(v.begin(),v.end());
	index = std::distance(v.begin(),wi);

	std::cout << "max =" << *wi << std::endl;
	std::cout << "index =" << index << std::endl;

	return(0);

};
