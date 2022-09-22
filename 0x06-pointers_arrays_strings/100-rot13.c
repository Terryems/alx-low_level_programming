#include "main.h"
/**
 * rot13 - function that encode string
 * @c: char variable
 * Return: 0 always
 **/
char *rot13(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if ((c[i] >= 'a' && c[i] < 'n') || (c[i] >= 'A' && c[i] < 'N'))
		{
			c[i] += 13;
		}
		else
		{
		c[i] -= 13;
		}
	}
}
