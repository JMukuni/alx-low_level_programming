#include "holberton.h"
/**
 * wildcmp - compare  and return 1 if 2 strings are identical or 0
 * @s1: input string1
 * @s2: input string2
 * Return: 1 if true, 0 if false
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0')
{
if (*s2 != '\0' && *s2 == '*')
return (wildcmp(s1, s2 + 1));
return (*s2 == '\0');
}
if (*s2 == '*')
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
else if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
return (0);
}
