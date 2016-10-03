#include <iostream>
#include <blitz/array.h>

using namespace std;
using namespace blitz;


class Vfun_L7D {
private:
	Array<double,7>	v;
	Array<double,7>	w;
	Array<double,7>	saving;
	Array<double,7>	cons;
	Array<double,7>	leisure;
public:
	Vfun_L7D(int na, int ny, int np, int nm, int nh, int nL, int nT);
	Array<double,7> getV(void) {return v;};
};
Vfun_L7D::Vfun_L7D(int na, int ny, int np, int nm, int nh, int nL, int nT) : 
	v(na,   ny,  np,  nm,  nh,  nL,  nT),
	w( na, ny,  np,  nm,  nh,  nL,  nT),
	saving( na,  ny,  np,  nm,  nh,  nL,  nT),
	leisure( na,  ny,  np,  nm,  nh,  nL,  nT) {
		v = 13;

	}
struct Vfun_L6D {
	Array<double,6>	v;
	Array<double,6>	w;
	Array<double,6>	saving;
	Array<double,6>	cons;
	Array<double,6>	leisure;
};
struct Env6D {
	Array<double,6>	saving;
	Array<double,6>	cons;
	Array<double,6>	leisure;
	Array<double,6> V, EV, Pr7, Pr13, Repay13, Indi7,Indi13;
	Array<int   ,6> Labor, Dchoice;// (a,y,p,m,h,age)
};
struct Env5D {
	Array<double,5>	saving;
	Array<double,5>	cons;
	Array<double,5>	leisure;
	Array<double,5> V, EV, Pr7, Pr13, Repay13, Indi7,Indi13;
	Array<int   ,5> Labor, Dchoice;// (a,y,p,m,h,age)
};

class VfunO{
private: 
	Vfun_L7D *stay,*sell,*def,*file7,*file13;
	Vfun_L6D *filedef;
	Env6D *OwnEnv, *File7Env, *File13Env;
	Env5D *FileDefEnv;
public:
	VfunO(int na, int nap, int naneg, int ny, int np, int nm, int nh, int nL, int nT);
	~VfunO();
	Vfun_L7D* getStay(void) {return stay;};
};

VfunO::VfunO(int na, int nap, int naneg, int ny, int np, int nm, int nh, int nL, int nT) 
{   
	 stay = new Vfun_L7D(na,ny,np,nm,nh,nL,nT);
	
}
VfunO::~VfunO(){
	delete stay;
}

int main(){
	int na = 5;
	int nap = 5;
	int ny= 5;
	int np = 5;
	int nm = 5;
	int nh = 5;
	int nT = 5;
	int nL = 2;
	VfunO test(na,nap,nap,ny,np,nm,nh,nL,nT);
	cout << "result = " <<  test.getStay()->getV()(0,0,0,0,0,0,0);
}