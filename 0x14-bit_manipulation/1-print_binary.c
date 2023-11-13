#include "main.h"

/**
 * print_binary - prints the binary representation of a decimal number
 * @n: binary number to be printed
 */

void print_binary(unsigned long int n)
{
	int i;
	int j = 0;
	unsigned long int value;

	for (i = 63; i >= 0; i--)
	{
		value = n >> i;

		if (value & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}
