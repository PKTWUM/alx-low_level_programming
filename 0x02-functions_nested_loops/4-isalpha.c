#include "main.h"
/**
 * _isalpha - function that checks for alpha
 * Return: always 1
 * @c: parameter to be check
 */
int _isalpha(int c)
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
