#include "main.h"

/**
 * swap_int - fun swap the value of two integers.
 *
 * @x: first integer.
 * @y: second integer.
 *
 */

void swap_int(int *x, int *y)
{
	int z;

	z = 0;
	z = *x;
	*x = *y;
	*y = z;
}
