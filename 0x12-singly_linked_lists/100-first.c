#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * Defination: prints a sentence before the main
 * function is executed
 */
void first(void)
{
 printf("I bore my house upon my back!\n");
 printf("You're beat! and yet, you must allow,\n");
}
