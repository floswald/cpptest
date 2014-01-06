

#include <iostream>

struct myStruct {
	double a;
	double A;
	int b;
	int B;
	bool T;
};

int main(){

	myStruct S;

	std::cout << "Default values of myStuct: " << std::endl;
	std::cout << "double S.a = " << S.a << std::endl;
	std::cout << "double S.A = " << S.A << std::endl;
	std::cout << "int S.b = " << S.b << std::endl;
	std::cout << "int S.B = " << S.B << std::endl;
	std::cout << "bool S.T = " << S.T << std::endl;

	return 0;
}

