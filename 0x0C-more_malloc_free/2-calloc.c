#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc -  function that allocates memory for an array, using malloc
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *f;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	f = ptr;
	for (i = 0; i < (size * nmemb); i++)
		f[i] = '\0';
	return (ptr);
}
