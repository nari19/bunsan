/*
 * RPC server code for the remote sub function
 */

#include "sub.h"
#include <stdio.h>

int *
sub_1_svc(intpair *argp, struct svc_req *rqstp)
{
	static int  result;

	result = argp->a - argp->b;
	printf("sub(%d, %d) = %d\n", argp->a, argp->b, result);
	return &result;
}
