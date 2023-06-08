#include"main.h"

/**
 * binary_to_uint - converts a binary to unsigned integer
 * @b: string that contains the binary number
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int dis_value = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		dis_value = 2 * dis_value + (b[j] - '0');
	}

	return (dis_value);
}
