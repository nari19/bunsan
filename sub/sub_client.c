/* RPC example: sub two numbers */

#include "sub.h"
#include <stdio.h>

CLIENT *rpc_setup(char *host);
void sub(CLIENT *clnt, int a, int b);

int
main(int argc, char *argv[])
{
	CLIENT *clnt;  /* client handle to server */
	char *host;    /* host */
	int a, b;

	if (argc != 4) {
		printf("usage: %s server_host num1 num2\n", argv[0]);
		exit(1);
	}
	host = argv[1];
	if ((a = atoi(argv[2])) == 0 && *argv[2] != '0') {
		fprintf(stderr, "invalid value: %s\n", argv[2]);
		exit(1);
	}
	if ((b = atoi(argv[3])) == 0 && *argv[3] != '0') {
		fprintf(stderr, "invalid value: %s\n", argv[3]);
		exit(1);
	}
	if ((clnt = rpc_setup(host)) == 0)
		exit(1);	/* cannot connect */
	sub(clnt, a, b);
	clnt_destroy(clnt);
	exit(0);
}

CLIENT *
rpc_setup(char *host)
{
	CLIENT *clnt = clnt_create(host, sub_PROG, sub_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror(host);
		return 0;
	}
	return clnt;
}

void
sub(CLIENT *clnt, int a, int b)
{
	int  *result;
	intpair v;	/* parameter for sub */

	v.a = a;
	v.b = b;
	result = sub_1(&v, clnt);
	if (result == 0) {
		clnt_perror(clnt, "call failed");
	} else {
		printf("%d\n", *result);
	}
}
