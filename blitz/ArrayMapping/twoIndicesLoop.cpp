#include <iostream>
#include <cstdlib>
#include <blitz/array.h>
using namespace std;
using namespace blitz;

int main(int argc, char *argv[])
{
	// directly allocate an array
	 Array<double,2> G(2,2);
	 G = 0;

	 cout << "Array G is " << G << endl;


	 for (std::pair<Array<double,2>::iterator,int> i(G.begin(), 0);
			 i.first != G.end();
			 ++i.first, ++i.second){
		 *i.first = i.second;
	 }

	 cout << "now G is " << G << endl;

	 return(0) ;

 }
