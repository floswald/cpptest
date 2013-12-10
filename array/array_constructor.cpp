

#include <iostream>


class T2 {
	private:
		int na;
		double * arr1, *arr2;
	public:
		T2();
		T2(int n){
			na = n;
			arr1 = new double[n];
			arr2 = new double[n];
			arr1[0] = 1;
			arr2[0] = 2;
		}
		~T2(){
			delete arr1;
		}
		void show(void){
			std::cout << "n = " << na << std::endl;
			std::cout << "arr1[0] = " << arr1[0] << std::endl;
			std::cout << "arr2[0] = " << arr2[0] << std::endl;
		}
};


int main()
{ 

	T2 t2(10);
	t2.show();
	return 0;
}
