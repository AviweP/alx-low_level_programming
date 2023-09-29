#include "main.h"
#include <stddef>
/**
 * binary_to_uint - sighn binary intigers
 *
 * @b: pointer to a string
 * Return: (output)
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		while (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}

