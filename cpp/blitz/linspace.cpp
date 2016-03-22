

#include <math.h>
#include <iterator>
#include <blitz/array.h>
#include <iostream>

blitz::Array<double,1> linspace(double min, double max, int n) {

	blitz::Array<double,1> res(n);
	for (int it = 0; it<n; it++){
	//for (blitz::Array<double,1>::iterator it = res.begin();
										//it != res.end();
									   //it++){
		//*it = min + std::distance(res.begin(),it) * (max-min) / (floor(n)-1);
		res(it) = min + it * (max-min) / (floor(n)-1);
		}
	return(res);
}

int main(){

	std::cout << "linspace(1,10,10):" << std::endl;
	std::cout << linspace(1,10,10) << std::endl;

	std::cout << "linspace(1,10,9):" << std::endl;
	std::cout << linspace(1,10,9) << std::endl;
	
	std::cout << "linspace(0,1,20):" << std::endl;
	std::cout << linspace(0,1,20) << std::endl;

	std::cout << "linspace(-5,5,19):" << std::endl;
	std::cout << linspace(-5,5,19) << std::endl;
	return 0;
}

