#include "main.h"
/**
 * print_line - function declsred
 * @n: integer assigned
 * Return: 0 if sucesssful
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 1; i <= n; i++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}
