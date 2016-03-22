

#include <math.h>
#include <iterator>
#include <vector>
#include <iostream>

std::vector<double> linspace(double min, double max, int n) {

	std::vector<double> res(n);
	for (std::vector<double>::iterator it = res.begin();
							 		   it != res.end();
							           it++){
		*it = min + distance(res.begin(),it) * (max-min) / (floor(n)-1);
		}
	return(res);
}

int main(){

	std::vector<double> r0;
	r0 = linspace(1,10,10);
	std::cout << "linspace(1,10,10):" << std::endl;
	for(std::vector<double>::iterator it=r0.begin();it!=r0.end();it++) std::cout << *it << std::endl;

	std::vector<double> r;
	r = linspace(1,10,9);
	std::cout << "linspace(1,10,9):" << std::endl;
	for(std::vector<double>::iterator it=r.begin();it!=r.end();it++) std::cout << *it << std::endl;
	
	std::vector<double> r2;
	r2 = linspace(0,1,20);
	std::cout << "linspace(0,1,20):" << std::endl;
	for(std::vector<double>::iterator it=r2.begin();it!=r2.end();it++) std::cout << *it << std::endl;

	std::vector<double> r3;
	r3 = linspace(-5,5,19);
	std::cout << "linspace(-5,5,19):" << std::endl;
	for(std::vector<double>::iterator it=r3.begin();it!=r3.end();it++) std::cout << *it << std::endl;

	
	return 0;
}
