#include"main.h"

/**
 * get_endianness - checks if machine is endianness
 * Return: 0 (big), 1 (little)
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *) &j;

	return (*c);
}
