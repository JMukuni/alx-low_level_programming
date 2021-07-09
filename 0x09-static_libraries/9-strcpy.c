#include "holberton.h"
/**
 * *_strcpy - copystring pointed to by src including null byte
 * @dest: copied string
 * @src: string to be copied
 * Return: pointer to new copied string
 */
char *_strcpy(char *dest, char *src)
{
char *ptr = dest;
while (*src)
*dest++ = *src++;
*dest = 0;
return (ptr);
}
