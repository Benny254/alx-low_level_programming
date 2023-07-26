#include "main.h"

int main(void)
{
	int m;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &m;
/*
 * Writing my line of code here.
 * Remainder:
 * - Am allowed to use a
 * -Am allowed to modify p
 * -one statement only
 * -you are only allowed to code this line of code
 */
	*(p + 5) = 98;
/* ...so this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
