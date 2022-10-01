#include "main.h"
/**
 * _strncpy - function that copy a n number of string
 * @dest: assigned char variable destination
 * @src: assigned char variable sources
 * @n: interger n (number of char)
 * Return: dest
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
		dest[i] = src[i];
		}
	}
	while (i < n)
	{
	dest[i++] = '\0';
	}
	return (dest);
}
