#include <stdio.h>
/**
 * main - Entry point
<<<<<<< HEAD
 * Description: 'Print alphabets lowercase and uppercase'
=======
 * Description: 'Prints the alphabet in lowercase, and then in uppercase'
>>>>>>> c49f42f905dbf8559081268a3804e4a39a7e93fe
 * Return: Always 0
 */
int main(void)
{
	int n = 97;
	int m = 65;
<<<<<<< HEAD
	
	while (n <= 122)
	{
		putchar(n);
=======

	while (n <= 122)
	{
		putchar(n);
		n++;
>>>>>>> c49f42f905dbf8559081268a3804e4a39a7e93fe
	}
	while (m <= 90)
	{
		putchar(m);
<<<<<<< HEAD
	}
	putchar ('\n');
=======
		m++;
	}
	putchar('\n');
>>>>>>> c49f42f905dbf8559081268a3804e4a39a7e93fe
	return (0);
}
