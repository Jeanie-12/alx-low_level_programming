#include "main.h"
/**
 * positive_or_negative - check for postive or negative values
 *
 * @i: the value to be checked
 * Return: always (0)
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative");
	else
		printf("%d is positive");
}
