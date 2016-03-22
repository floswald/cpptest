#include <blitz/array.h>

using namespace blitz;

int main(){

    Array<double,1> A(3);
    Array<double,1> B(3,FortranArray<1>());

    B = 1 , 2 , 3.3;
    std::cout << "B = " << B << std::endl;

    A = B;
    std::cout << "copied FortranArray B into CArray A:" << std::endl;
    for (int i=1;i<4;i++){
	    std::cout << "A(i) = " << A(i) << std::endl;
    }

    Array<double,1> C(3,FortranArray<1>());
    C = B;
    std::cout << "copied FortranArray B into FortranArray C:" << std::endl;
    for (int i=1;i<4;i++){
	    std::cout << "C(i) = B(i) = " << C(i) << std::endl;
    }


    Array<double,1> D = B;
    std::cout << "copy constructor:" << std::endl;
    for (int i=1;i<4;i++){
	    std::cout << "D(i) = " << D(i) << std::endl;
    }

return 0;
}
