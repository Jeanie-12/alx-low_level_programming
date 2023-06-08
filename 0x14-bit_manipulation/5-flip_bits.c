#include"main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, add = 0;
	unsigned long int new;
	unsigned long int exclude = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		new = exclude >> j;
		if (new & 1)
			add++;
	}

	return (add);
}
