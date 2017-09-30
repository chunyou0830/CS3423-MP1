#include "syscall.h"

int
main()
{
	int n;
	for (n=150;n>5;n--) {
		PrintInt(n);
	}
        Halt();
}

