#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: assigned a pointer char var
 * @c: assigned char var
 * Return: c
 **/
char *_strchr(char *s, char c)
{
	char *sum = s - 1;

	do {
		sum++;
		if (*sum == c)
		return (sum);
	} while (*sum != '\0');
	return (0);
}
