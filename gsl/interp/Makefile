
spline:
	g++ splineinterp.cpp -lgsl -o interp.a
	./interp.a > plot.dat
	graph -T X -L "spline Interpolation" < plot.dat 

splineHPC:
	g++ splineinterp.cpp -L/cm/shared/apps/gsl/1.15/lib -lgsl -lgslcblas -I/cm/shared/apps/gsl/1.15/include -o interp.a
	./interp.a 

linear:
	g++ lininterp.cpp -o interp.a -lgsl
	./interp.a > plot.dat
	graph -T X  -L "linear Interpolation"< plot.dat






