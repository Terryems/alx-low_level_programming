#include "main.h"
/**
 * _memcpy - function to copy
 * @dest: destination char
 * @src: source char
 * @n: int
 * Return: dest
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (i = 0; i < n; i++)
	{
		cdest[i] = csrc[i];
	}
	return (dest);
}
