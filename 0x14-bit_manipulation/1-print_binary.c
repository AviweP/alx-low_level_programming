#include "main.h"
/**
 * print_binary - print binary rerpresentation of a number
 * @n: number to print
 * Return: (0)
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		return;
	print_binary(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
/**
 * print_bin - print binary
 * @n: The decimal to convert
 */
void print_bin(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_binary(n);
	}
}
