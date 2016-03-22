#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <gsl/gsl_errno.h>
#include <gsl/gsl_spline.h>

int
main (void)
{
	  int i;
	  int pts = 50;
	    double xi, yi, x[pts], y[pts];

	  printf ("#m=0,S=2\n");

	    for (i = 0; i < pts; i++)
		    {
		      x[i] = i + 0.5 * sin (i);
	          y[i] = i + cos (i * i);
		      printf ("%g %g\n", x[i], y[i]);
										      }

			  printf ("#m=1,S=0\n");

			    {
			    gsl_interp_accel *acc  = gsl_interp_accel_alloc ();
			    gsl_spline *spline = gsl_spline_alloc (gsl_interp_cspline, pts);

			    gsl_spline_init (spline, x, y, pts);

			    for (xi = x[0]; xi < x[pts-1]; xi += 0.01)
		      {
	          yi = gsl_spline_eval (spline, xi, acc);
	          printf ("%g %g\n", xi, yi);
			  //yi = gsl_interp_eval_deriv (linint, x,y,xi, acc);
			  //printf ("derivative: %g %g\n", xi, yi);
	        }
		    gsl_spline_free(spline);
		    gsl_interp_accel_free (acc);
		  }
	  return 0;
}
