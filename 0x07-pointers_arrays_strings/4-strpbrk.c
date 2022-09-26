#include "main.h"
/**
 * _strpbrk - function that loctates a character in a string
 * @s: pointer where we search for a char
 * @accept: char been searched for
 * Return: Null
 **/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			return (s + i);
		}
	}
	return ('\0');
}
