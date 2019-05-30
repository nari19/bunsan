struct intpair {
	int a;
	int b;
};

program CALCULATOR {
	version CALC_VERS {
		int ADD(intpair) = 1;
		int SUB(intpair) = 2;
		int div(intpair) = 3;
		int MUL(intpair) = 4;
	} = 1;
} = 0x23451111;
