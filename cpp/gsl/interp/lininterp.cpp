#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <gsl/gsl_errno.h>
#include <gsl/gsl_interp.h>

int
main (void)
{
	  int pts = 50;
	    double xi, yi, x[pts], y[pts];

	  printf ("#m=0,S=2\n");

	    for (int i = 0; i < pts; i++)
		    {
		      x[i] = i + 0.5 * sin (i);
	          y[i] = i + cos (i * i);
		      printf ("%g %g\n", x[i], y[i]);
										      }

			  printf ("#m=1,S=0\n");

			    {
			    gsl_interp_accel *acc  = gsl_interp_accel_alloc ();
			    gsl_interp *linint  = gsl_interp_alloc (gsl_interp_linear, pts);

			    gsl_interp_init (linint, x, y, pts);

			    for (xi = x[0]; xi < x[pts-1]; xi += 0.01)
		      {
	          yi = gsl_interp_eval (linint,x,y, xi, acc);
	          printf ("%g %g\n", xi, yi);
			  //yi = gsl_interp_eval_deriv (linint, x,y,xi, acc);
			  //printf ("derivative: %g %g\n", xi, yi);
	        }
		    gsl_interp_free(linint);
		    gsl_interp_accel_free (acc);
		  }
	  return 0;
}
