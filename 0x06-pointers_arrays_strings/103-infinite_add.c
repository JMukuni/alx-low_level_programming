#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_intlen - determines length of integers
 *@num: integer
 *@length: integer length
 */
int _intlen(unsigned long int num)
{
int length = 0;
while (num)
{
length++;
num /= 10;
}
return (length);
}
/**
 *_strlen - determine string length
 *@string: string of characters
 *@length: length of string
 */
int _strlen(char *string)
{
int length = 0;
while (*string)
{
length++;
string++;
}
return (length);
}
/**
 *map2int - map to integer
 *@num: integer
 *@n: character variable
 */
unsigned long int map2int(char *n)
{
unsigned long int num = 0;
while (*n)
{
num = num * 10 + (*n - 48);
n++;
}
return (num);
}
/**
 *map2char - map to character
 *@num: integer
 *@a: character
 *@b: second character
 */
char *map2char(unsigned long int num)
{
char *a = malloc(_intlen(num) * sizeof(char));
char *b = a;
while (num)
{
*a = num % 10;
num /= 10;
a++;
}
*a = '\0';
return (b);
}
/**
 *_add - add two numbers
 *@n1: first number
 *@n2: second number
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
unsigned long int sum = map2int(n1) + map2int(n2);
if (_intlen(sum) <= size_r)
{
*r = sum;
return (map2char(sum));
}
else
{
return (0);
}
}
