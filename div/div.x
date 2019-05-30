struct intpair {
	int a;
	int b;
};

program div_PROG {
	version div_VERS {
		int div(intpair) = 1;
	} = 1;
} = 0x23451111;