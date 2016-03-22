
#include <blitz/array.h>

class TheClass {
   public:
   blitz::Array<int,1> * theArrays[2];

   void init() {
      blitz::Array<int,1> * M1, * M2;
      M1 = new blitz::Array<int,1>(1); (*M1)(0) = 1;
      M2 = new blitz::Array<int,1>(1); (*M2)(0) = 2;
      theArrays[0] = M1;
      theArrays[1] = M2;
      printf("Init: Extents %d; %d\n",
            M1->extent(0),M2->extent(0));
      printf("Init: Values %d; %d\n",
            (*M1)(0),(*M2)(0));
      // M1 and M2 are heap-allocated, so they don't
      // go out of scope and get destroyed.  In this
      // simplistic test, they also leak.
   }
   void test() {
      printf("Test: Extents %d; %d\n",
            theArrays[0]->extent(0), theArrays[1]->extent(0));
      printf("Test: Values %d; %d\n",
            (*theArrays[0])(0),(*theArrays[1])(0));
   }
};


int main() {
   TheClass MC;
   MC.init();
   MC.test();
   return 0;
}
