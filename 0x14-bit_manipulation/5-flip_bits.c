#include "main.h"

/**
 * flip_bits - function that returns the number of bits 
 * you would need to flip to get from one number to another.
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int j = 0;
	unsigned long int value;
	unsigned long int k = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		value = k >> i;
		if (value & 1)
			j++;
	}

	return (j);
}
