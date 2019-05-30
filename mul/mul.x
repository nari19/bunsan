struct intpair {
	int a;
	int b;
};

program mul_PROG {
	version mul_VERS {
		int mul(intpair) = 1;
	} = 1;
} = 0x23451111;