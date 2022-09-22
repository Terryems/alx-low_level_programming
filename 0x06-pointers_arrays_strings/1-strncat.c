#include "main.h"
/**
 * _strncat - function declared to print two concatenated strings
 * @dest: assigned char variable
 * @src: assigned char variable
 * @n: assigned int variable
 * Return: is dest
 **/
char *_strncat(char *dest, char *src, int n)
{
	int l, j;

	l = 0;

	while (dest[l] != '\0')
	{
	l++;
	}

	for (j = 0; j < n; j++)
	{
		dest[l + j] = src[j];
		if (src[j] == '\0')
		{
		j = n;
		}
	}
	return (dest);
}
