#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiply two arguments and print result
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if no errors
 */
int main(int argc, char *argv[])
{
int first, second;
if (argc == 3)
{
first = atoi(argv[1]);
second = atoi(argv[2]);
printf("%i\n", first * second);
return (0);
}
printf("Error\n");
return (1);
}
