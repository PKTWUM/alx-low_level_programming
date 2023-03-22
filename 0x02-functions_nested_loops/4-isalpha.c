#include "main.h"
/**
 * ispha - function that check for alpha
 * Return: always 1
 * @c: parameter to be check
 */
int ispha(int c)

{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
