#include "main.h"
/**
 * _isdigit - check if nos are 0-9
 * @c: print numbers between 0 to 9
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
