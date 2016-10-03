
// task: have a pointer to both an instance of a class and a struc
// use data and functions from the class and the struct to do some stuff
// then return

#include <iostream>
#include <blitz/array.h>
#include <gsl/gsl_min.h>
#include <gsl/gsl_interp.h>

using namespace std;
using namespace blitz;

class Test {
	private:
	Array<int,2> b1,b2;
	gsl_function F;
	public: 
	Test();
	void show();
};

// default constructor
Test::Test() : b1(FortranArray<2>()), b2(FortranArray<2>()) {
	//b1=1;b2=2;b3=5;
}

void Test::show(){
	cout << "===================" << endl;
	cout << "Start show method: " << endl;
	cout << "b1 = " << endl;
	cout << b1 << endl;
	cout << "b2 = " << endl;
	cout << b2 << endl;
	cout << "address of F = " << endl;
	cout << &F << endl;
	cout << "end of show method: " << endl;
	cout << "===================" << endl;
}


int main()
{ 

	// initiate default
	Test t;
	t.show();
	return 0;
}
