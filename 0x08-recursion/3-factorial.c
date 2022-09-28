#include "main.h"
/**
 * factorial - funtion that returns the factorial of a given number
 * @n: integer
 * Return: -1, 0, value
 **/
int factorial(int n)
{
	if (n > 0)
	{
	return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
	return (1);
	}
	else
	{
	return (-1);
	}
}
