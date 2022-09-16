#include "main.h"
/**
 * print_diagonal - function declared
 * @n: interger assigned
 * Return: no return
 */
void print_diagonal(int n)
{
	int b1, b2;

	for (b1 = 0; b1 < n; b1++)
	{
	for (b2 = 0; b2 < b1; b2++)
	{
	_putchar(' ');
	}
	_putchar(92);
	if (b1 < (n - 1))
	{
	_putchar('\n');
	}
	}
	_putchar('\n');
}
