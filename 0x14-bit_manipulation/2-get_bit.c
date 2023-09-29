#include "main.h"

/**
 * get_bit - get the value of a bit at an index
 * @n: number check
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > sizeof(size_t) * 8)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}


