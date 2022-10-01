#include <stdio.h>
#include "main.h"
/**
 * _strspn - gets the length of a prefix
 * @s: pointer to a char variable
 * @accept: pointer to the substring
 * Return: unsigned int anmd length
 **/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int cnt = 0, x, i;

	for (x = 0; s[x] != '\0' && x == cnt; x++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[x] == accept[i])
			cnt++;
		}
	}
	return (cnt);
}
