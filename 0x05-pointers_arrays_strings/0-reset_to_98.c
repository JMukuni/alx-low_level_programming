#include "holberton.h"
/**
 *reset_to_98 - takes a pointer to an int
 *@n - variable n
 *@*n - pointer to variable n
 */
void reset_to_98(int *n)
{
int n = 98;
int *n = &n;
_putchar('%p', &n);
_putchar('\n')
}
