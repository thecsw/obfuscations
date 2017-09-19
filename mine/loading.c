#include "stdio.h"
#include "math.h"
typedef double u_int64;
int main() ??<
	u_int64 e = 0; 
	for (u_int64 i = 0; i > - pow(2, 4); i--) ??<
		e += (u_int64)(pow(2.0, i));
		printf("%f - > %f - > %f\n", i, (u_int64)(pow(2.0, i)), e);
	??>return 0;??>