#include "holberton.h"
/**
 * malloc_checked - allocate memory using malloc
 * @b: number of bytes to be allocated
 * Return: returns a void pointer
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (!ptr)
exit(98);
return (ptr);
}
