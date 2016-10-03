


    #include <gtest/gtest.h> // Include the google test framework
    #include "TClass.h"
    
    
    class TClassTest : public ::testing::Test {
     protected:
    	int n;
    	int m;
    	std::vector<blitz::Array<double,2> * > M;
      virtual void SetUp() {
    	  n = 3;
    	  m = 2;
    	  M.push_back( new blitz::Array<double,2>(n,m) );
    	  M.push_back( new blitz::Array<double,2>(n,m) );
    	  T = new TClass(M);
      }
    
      virtual void TearDown() {
		  delete T;
	  	  delete M[0];
	      delete M[1];
	  }
    
      TClass  *T;
    };
    
    
    TEST_F(TClassTest, CanGetM1){
    
    	EXPECT_EQ( T->GetM(0), M.at(0) );
    
    }
    
    TEST_F(TClassTest, CanSeeN){
    
    	EXPECT_EQ( 3, n );
    
    }
    
    TEST_F(TClassTest, CanSeeM){
    
    	EXPECT_EQ( 3, (*M.at(0)).extent(blitz::firstDim) );
    
    }
    
    int main(int argc, char **argv) { 
      ::testing::InitGoogleTest(&argc, argv);
      return RUN_ALL_TESTS();
    }
       
    
