// task: have a pointer to both an instance of a class and a struc
// use data and functions from the class and the struct to do some stuff
// then return

#include <iostream>
#include <blitz/array.h>

using namespace std;
using namespace blitz;

class Test {
	private:
	Array<int,2> b1,b2;
	Array<double,2> b3;
	public: 
	Test();
	Test(int d);
	Test(TinyVector<int,2> shape);
	void show();
	Array<int,2> get2( void ) {return(b2);};
	Array<double,2> get3( void ) {return(b3);};
	//void set1(int a){b1 = a;};
	void set1(Array<int,2> a){ b1.reference(a) ;};
	const Array<int,2>* getref1( void ) const {return &b1;};
	void set2(int a){b2 = a;};
	void add( double a ){ b3 = b1 + a; };
	void order1( void ){ cout << "class interior ordering of b1: " << b1.ordering() << endl; };
};

// default constructor
Test::Test() : b1(FortranArray<2>()), b2(FortranArray<2>()), b3(FortranArray<2>()) {
	//b1=1;b2=2;b3=5;
}
Test::Test(int d) : b1(d,d,FortranArray<2>()), b2(d,d,FortranArray<2>()), b3(d,d,FortranArray<2>()) {
	b1=1;b2=2;b3=5;
}
Test::Test(TinyVector<int,2> shape) : b1(shape,FortranArray<2>()), b2(shape,FortranArray<2>()), b3(shape,FortranArray<2>()) {
	b1=1;b2=2;b3=5;
}

void Test::show(){
	cout << "===================" << endl;
	cout << "Start show method: " << endl;
	cout << "b1 = " << endl;
	cout << b1 << endl;
	cout << "b2 = " << endl;
	cout << b2 << endl;
	cout << "b3 = " << endl;
	cout << b3 << endl;
	cout << "end of show method: " << endl;
	cout << "===================" << endl;
}


int main()
{ 

	// initiate default
	Test t;
	//t.show();
	// initiate with one paramterd
	//Test t2(3);
	//t2.show();
	// initiate with shape vector
	//Test t3(shape(2,2));
	//t3.show();

	// reference class member to existing data
	Array<int,2> data(shape(2,4),FortranArray<2>());
	Array<int,2> d2;
	data = 1,2,3,4,
		   5,6,7,8;
	t.set1( data );
	t.show();
	t.add( 4 );
	t.show();
	//t3.set1( data );
	//t3.show();
	//cout << "address of b1 " << t3.getref1() << endl;
	//cout << "address of a " << &data << endl;
	//t.set1(1);
	//t.set2(3);

	//t.show();
	//t.add(4);

	//t.order1();



	// get some result arrays ready
	//blitz::Array<int,2> r1(2,2,FortranArray<2>()),r2(2,2,FortranArray<2>());
	//r1 = t.get2();
	//r2 = t.get3();
	//cout << "b2 ordering is :" << endl;
	//cout << r1.ordering() << endl;
	//cout << "b3 is :" << endl;
	//cout << r2 << endl;
	//cout << "b3 is ordered as :" << endl;
	//cout << r2.ordering() << endl;
	return 0;
}
