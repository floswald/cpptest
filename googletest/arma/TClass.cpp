


    #include <armadillo>
    #include <vector>
    
    class TClass {
    	private: 
    		std::vector<arma::mat * > mats;
    	public:
    		TClass(std::vector<arma::mat * > m_);
    		arma::mat * GetM( int which ){ return( mats.at(which) );};
    
    };
    
    TClass::TClass(std::vector<arma::mat * > m_){
    	mats = m_;
    }





