#include <stdio.h>

#include "../src/fixedmath.h"


int main(int argc, char* argv[])
{
	fixedmath_init();


	intv a = UPM*5/3;
	intv b = UPM*2/7;

	printf("5/3 * 2/7 = %f.\n", ((float)VMV(a,b))/UPM);


	inta theta = 2.0/3.0*PI2;
	intv c;
	intv s;
	ANGTOCS(theta, c, s);

	printf("The cos and sin of the angle 1/3*PI are %f and %f.\n", 
			((float)c)/UPM, ((float)s)/UPM);


	return 0;
}
