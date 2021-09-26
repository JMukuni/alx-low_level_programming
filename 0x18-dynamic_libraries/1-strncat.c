#include "main.h"
/**
 * *_strncat - function that concatenates two strings.
 * @dest: input is array to be modified
 * @src: input is array source
 * @n: input
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
int strlen, dest_len, i, m;
while (src[strlen] != 0)
{
strlen++;
}
while (dest[dest_len] != 0)
{
dest_len++;
}
m = n;
for (i = 0 ; i < m && src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}
dest[dest_len + i] = '\0';
return (dest);
}
