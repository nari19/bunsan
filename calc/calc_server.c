/*
 * RPC server code for the remote add function
 */

#include "calc.h"

int *
add_1_svc(intpair *argp, struct svc_req *rqstp)
{
  static int  result;

	result = argp->a + argp->b;
	printf("add(%d, %d) = %d\n", argp->a, argp->b, result);
	return &result;
}


int *
sub_1_svc(intpair *argp, struct svc_req *rqstp)
{
  static int  result;

	result = argp->a - argp->b;
	printf("sub(%d, %d) = %d\n", argp->a, argp->b, result);
	return &result;
}


int *
mul_1_svc(intpair *argp, struct svc_req *rqstp)
{
  static int  result;

	result = argp->a * argp->b;
	printf("mul(%d, %d) = %d\n", argp->a, argp->b, result);
	return &result;
}


int *
wari_1_svc(intpair *argp, struct svc_req *rqstp)
{
  static int  result;

	result = argp->a / argp->b;
	printf("wari(%d, %d) = %d\n", argp->a, argp->b, result);
	return &result;
}

