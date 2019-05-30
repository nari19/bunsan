/*
 * RPC server code for the remote mul function
 */

#include "mul.h"
#include <stdio.h>

int *
mul_1_svc(intpair *argp, struct svc_req *rqstp)
{
	static int  result;

	result = argp->a * argp->b;
	printf("mul(%d, %d) = %d\n", argp->a, argp->b, result);
	return &result;
}
