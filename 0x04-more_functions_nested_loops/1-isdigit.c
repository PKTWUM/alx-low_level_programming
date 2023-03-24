#include "main.h"
/**
 * is digit - check if nos are 0-9
 * oc: 
 *
 * Return: 0 or 1
 */
int_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
