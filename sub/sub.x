struct intpair {
	int a;
	int b;
};

program sub_PROG {
	version sub_VERS {
		int sub(intpair) = 1;
	} = 1;
} = 0x23451111;