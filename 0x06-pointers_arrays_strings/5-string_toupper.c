#include "main.h"
/**
 * string_toupper - function that changes lower cases to uppercase
 * @c: a pointer
 * Return: 0
 **/
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - 32;
		}
	i++;
	}
	return (c);
}
