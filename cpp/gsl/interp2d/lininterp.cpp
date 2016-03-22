#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "interp2d.h"
#include "interp2d_spline.h"

int
main (void)
{

	size_t xi, yi, zi;
	double x,y,z;

    double xarr[] = {0.0, 1.0, 2.0, 3.0};
    double yarr[] = {0.0, 1.0, 2.0, 3.0};
    double zarr[] = {1.0, 1.1, 1.2, 1.4,
                     1.3, 1.4, 1.5, 1.7,
                     1.5, 1.6, 1.7, 1.9,
                     1.6, 1.9, 2.2, 2.3};
    
	size_t xsize = sizeof(xarr) / sizeof(xarr[0]);
    size_t ysize = sizeof(yarr) / sizeof(yarr[0]);
    size_t zsize = sizeof(zarr) / sizeof(zarr[0]);
    double xval[] = {0.0, 0.5, 1.0, 1.5,  2.5,   3.0,  1.3954,    1.6476,       0.824957,  2.41108,  2.98619,   1.36485};
    double yval[] = {0.0, 0.5, 1.0, 1.5,  2.5,   3.0,  0.265371,  2.13849,      1.62114,   1.22198,  0.724681,  0.0596087};
    size_t test_size = sizeof(xval) / sizeof(xval[0]);

	double zout[zsize];

	gsl_interp_accel *xa, *ya;
    xa = gsl_interp_accel_alloc();
    ya = gsl_interp_accel_alloc();

    interp2d_spline* interp_s = interp2d_spline_alloc(interp2d_bilinear, xsize, ysize);


	interp2d_spline_init(interp_s, xarr, yarr, zarr, xsize, ysize);

    for (xi = 0; xi < xsize; xi++) {
        double x = xarr[xi];
        for (yi = 0; yi < ysize; yi++) {
            double y = yarr[yi];
            
            zi = INDEX_2D(xi, yi, xsize, ysize);
            zout[zi] = interp2d_spline_eval( interp_s, x, y, xa, ya );
			std::cout << "check at index " << zi <<": pt - interp(pt) = " << zout[zi] - zarr[zi] << std::endl;
        }
    }
	return 0;
}



