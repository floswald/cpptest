


#include <blitz/array.h>
#include <vector>

class TClass {
	private: 
		std::vector<blitz::Array<double,2> * > mats;
	public:
		TClass(std::vector<blitz::Array<double,2> * > m_);
		blitz::Array<double,2> * GetM( int which ){ return( mats.at(which) );};

};

TClass::TClass(std::vector<blitz::Array<double,2> * > m_){
	mats = m_;
}





