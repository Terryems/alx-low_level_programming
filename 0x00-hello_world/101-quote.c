#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
		char str1[] = "useful\" - Dora Korpar, 2015-10-19\n";

			write(2, str1, 59);
				return (1);
}
