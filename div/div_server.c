/*
 * RPC server code for the remote div function
 */

#include "div.h"
#include <stdio.h>

int *
div_1_svc(intpair *argp, struct svc_req *rqstp)
{
	static int  result;

	result = argp->a / argp->b;
	printf("div(%d, %d) = %d\n", argp->a, argp->b, result);
	return &result;
}
