


#include <gtest/gtest.h> // Include the google test framework
#include "TClass.cpp"


class TClassTest : public ::testing::Test {
 protected:
	int n;
	int m;
	std::vector<arma::mat * > M;
  virtual void SetUp() {
	  n = 3;
	  m = 2;
	  arma::mat M1 =  arma::randu<arma::mat>(n,m);
	  arma::mat M2 =  arma::randu<arma::mat>(n,m);
	  M.push_back( &M1);
	  M.push_back( &M2);
	  T = new TClass(M);
  }

  virtual void TearDown() {delete T;}

  TClass  *T;
};


TEST_F(TClassTest, CanGetM1){

	EXPECT_EQ( T->GetM(0), M.at(0) );

}

TEST_F(TClassTest, CanSeeN){

	EXPECT_EQ( 3, n );

}

TEST_F(TClassTest, CanSeeM){

	EXPECT_EQ( 3, (*M.at(0)).n_rows );

}

int main(int argc, char **argv) { 
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}


