#include "main.h"

/**
 * clear_bit - sets the value of a  bit to 0
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 it works, -1 failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if ((index > sizeof(unsigned long int) * 8) || n == NULL)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

