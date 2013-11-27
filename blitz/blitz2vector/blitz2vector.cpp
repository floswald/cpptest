

#include <iostream>
#include <vector>
#include <blitz/array.h>

using namespace std;
using namespace blitz;

int main(){

	Array<int,2> data(shape(2,4),FortranArray<2>());
	data = 1,2,3,4,
		   5,6,7,8;
	Array<int,2>::iterator it;
	
	std::vector<int> vec;

	for (it = data.begin(); it!=data.end(); it++){
		cout << it.position() << endl;
		vec.push_back(*it);
	}

	cout << "data.extent()" << endl;
	cout << data.extent() << endl;
	cout << "data.extent() + 1" << endl;
	TinyVector<int,2> ext;
	ext = data.extent() + 1;
	cout << ext << endl;

	for (std::vector<int>::iterator it=vec.begin(); it!=vec.end(); it++){
		cout << "vec position " << it-vec.begin() << endl;
		cout << "vec value " <<*it << endl;
	}

return 0;
}
