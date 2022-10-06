#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat -  function that concatenates two strings.
 * @s1: char pointer
 * @s2: char pointer
 * @n: number of elements to concat
 * Return: NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	len = 0;
	for (i = 0; s1[i]; i++)
		ptr[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		ptr[len++] = s2[i];

	ptr[len] = '\0';
	return (ptr);
}
