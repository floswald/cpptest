

#include "simclass.h"

using namespace arma;

int main(){

	std::cout<< "boilerplate running." << std::endl;

	std::vector<arma::mat *> VBK0;
	std::vector<arma::mat *> VBK7;
	std::vector<arma::mat *> VBK13;

	std::vector<std::vector<arma::mat * > > VR;

	int n1 = 4;
	int n2 = 5;

	mat A(n1,n2);
	A.fill(4);
    mat B(n1,n2);
	B.fill(12);
    mat C(n1,n2);
	C.fill(13);

	VBK0.push_back(&A);
	VBK0.push_back(&B);
	VBK7.push_back(&A);
	VBK7.push_back(&C);
	VBK13.push_back(&C);
	VBK13.push_back(&B);

	VR.push_back(VBK0);
	VR.push_back(VBK7);

	// create class instance
	Simulate S(n1,n2,n1,n2,n1,VBK0,VBK7,VBK13,VR);

	S.show( 1 );

}




