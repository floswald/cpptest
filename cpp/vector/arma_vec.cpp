

#include <math.h>
#include <iterator>
#include <vector>
#include <iostream>
#include <armadillo>



int main(){

	std::vector<double> v(10,4);

	arma::vec av(v.begin(),10,true,true);

	//arma::mat A(10,2);

	//A.col(0) = av;
	//A.col(1) = av;

	/*std::cout << A << std::endl;*/

	
	return 0;
}
