#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Numbers must be separated by ,, followed by a space
 * Printed in ascending order. use Putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
