	// std::max_element([NAN,NAN,NAN,-31,-89]) = NAN 
	// because NAN > -31 returns NAN.
	// how can I skip all NANs in the comparison?

	#include <vector>
	#include <iostream>
	#include <cmath>

	void vector_max(std::vector<double> v, double &max, int &imax){
		std::vector<double>::iterator v_iter;
		v_iter = std::max_element(v.begin(),v.end());
		imax = std::distance(v.begin(), v_iter);
		max  = *v_iter;
	}


	// C++11 version
// 	void vector_max(std::vector<double> v, double &max, int &imax){
//     std::vector<double>::iterator v_iter;
//     v_iter = std::max_element(v.begin(),v.end(),
//     [] (auto x, auto y)
//     {
//         return x < y ? true : isnan(x);
//     });
//     imax = std::distance(v.begin(), v_iter);
//     max  = *v_iter;
// }

	void vector_isnan_max(std::vector<double> v, double &max, int &imax){
		std::vector<double>::iterator v_iter;
	    std::vector<double>::size_type p=0;
	    imax = -1;
	    // max = -std::numeric_limits<double>::max();
	    max = std::numeric_limits<double>::lowest();

		for (v_iter=v.begin();v_iter!=v.end();v_iter++){
			std::cout << "current max = " << max << std::endl;
			if ((!std::isnan(*v_iter)) && (*v_iter>max)){
				imax = p;
				max  = *v_iter;
			}
		}
	}

	int main(){

		std::vector<double> v_vec;
		std::vector<double>::iterator v_vec_iter;
		int imax;
		double val;

		// std::cout << "test 1. " << std::endl;

		// v_vec.push_back( -33.0 );
		// v_vec.push_back( -124.0 );
		// v_vec.push_back( -31.0 );
		// v_vec.push_back( 18.4 );

		// vector_max(v_vec,val,imax);
		// std::cout << "max(v_vec) = " << val << std::endl;
		// std::cout << "indmax(v_vec) = " << imax << std::endl;

		// vector_isnan_max(v_vec,val,imax);
		// std::cout << "isnanmax(v_vec) = " << val << std::endl;
		// std::cout << "indisnanmax(v_vec) = " << imax << std::endl;

		// std::cout << "test 2. " << std::endl;

		// v_vec.clear();
		// v_vec.push_back( NAN );
		// v_vec.push_back( NAN );
		// v_vec.push_back( NAN );
		// v_vec.push_back( -33.0 );
		// v_vec.push_back( -124.0 );
		// v_vec.push_back( -31.0 );
		// v_vec.push_back( 31.0 );

		// vector_max(v_vec,val,imax);
		// std::cout << "max(v_vec) = " << val << std::endl;
		// std::cout << "indmax(v_vec) = " << imax << std::endl;

		// vector_isnan_max(v_vec,val,imax);
		// std::cout << "isnanmax(v_vec) = " << val << std::endl;
		// std::cout << "indisnanmax(v_vec) = " << imax << std::endl;

		std::cout << "test 3. " << std::endl;

		v_vec.clear();
		v_vec.push_back( -47.5);
		v_vec.push_back( NAN );
		v_vec.push_back( -37 );
		v_vec.push_back( -304.07 );
		v_vec.push_back( -2026 );
		v_vec.push_back( -53 );

		// vector_max(v_vec,val,imax);
		// std::cout << "max(v_vec) = " << val << std::endl;
		// std::cout << "indmax(v_vec) = " << imax << std::endl;

		vector_isnan_max(v_vec,val,imax);
		std::cout << "isnanmax(v_vec) = " << val << std::endl;
		std::cout << "indisnanmax(v_vec) = " << imax << std::endl;

	};
