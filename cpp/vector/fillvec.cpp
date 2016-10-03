#include <iostream>
#include <vector>

using namespace std;

int main(){

	int where = 3;
	std::vector<int> idx;
	for (int i=1;i<7;i++){
		if (i!=where){
			idx.push_back(i);
			cout << i << endl;
		}
	}
	for (vector<int>::iterator i=idx.begin();i!=idx.end();i++){
			cout << *i << endl;
	}
}


