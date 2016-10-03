



#include <blitz/array.h>

using namespace blitz;

int main(){

	secondIndex j;

	std::cout << "Find maxIndex of fortranArray: " << std::endl;

	Array<double,2> fdata(shape(2,4),FortranArray<2>());
	fdata = 4,5,
		   2,6,
		   3,7,
		   1,8;
	
	std::cout << "fdata: " << std::endl;
	std::cout << fdata << std::endl;
		   
	Array<int,1> idx(shape(2),FortranArray<1>());

	idx = maxIndex( fdata, j);

	std::cout << "maxIndex(fdata, secondDimension)" << idx << std::endl;
	
	std::cout << "Find maxIndex of C-style array: " << std::endl;

	Array<double,2> cdata(shape(2,4));
	cdata = 4,2,3,1,
		    5,6,7,8;
	
	std::cout << "cdata: " << std::endl;
	std::cout << cdata << std::endl;
		   
	Array<int,1> cidx(shape(2));

	cidx = maxIndex( cdata, j);

	std::cout << "maxIndex(cdata, secondDimension)" << cidx << std::endl;
return 0;
}
