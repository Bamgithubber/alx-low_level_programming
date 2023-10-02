#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
{
	int i = n;

	for (int r=0; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

