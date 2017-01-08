#include "MathFunctions.h"


double mysqrt(double ib_value)
{
#if defined (HAVE_LOG) && defined (HAVE_EXP)
	printf("Hello I'm using alternative method!\n");
	return exp(log(ib_value) * 0.5);
#else
	printf("Hello I'm using mysqrt!\n");
	return sqrt(ib_value);
#endif
}
