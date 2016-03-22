#include <blitz/array.h>

using namespace blitz;

int main(){

    Array<double,1> A(3,3);
    A = 2;
    std::cout << A;

return 0;
}
