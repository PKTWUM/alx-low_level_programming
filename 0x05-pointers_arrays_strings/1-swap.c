#include "main.h"
/**
 * swap_int - swao the values of two integers
 * @a: integer to swap
 * @b: interger to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
