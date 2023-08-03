#include "main.h"
/**
 * flip_bits - flip yhe bits to get from one number to another.
 * @a: the first number
 * @b: the second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int a, unsigned long int b)
{
	unsigned long int differnce, result;
	unsigned int j, i;

	j = 0;
	result = 1;
	differnce = a ^ b;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (result == (differnce & result))
			j++;
		result <<= 1;
	}

	return (j);
}
