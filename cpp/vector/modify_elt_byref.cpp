

// can you modify by reference an element of a std::vector?
// yes.

#include <vector>
#include <iostream>
#include <cmath>

void modify(double & in, double modi){
	in = modi;
}

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

	std::cout << "modifying now" << std::endl;

	modify(v.at(2),1.1);

	for (wi=v.begin();wi!=v.end();wi++) {
		std::cout << *wi << std::endl;
	}

	return(0);

};
