#include "main.h"
/**
 * _isupper - check the uppercase
 * @c: parameter
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c  <= 'Z')
		return (1);
	else
		return (0);
}
