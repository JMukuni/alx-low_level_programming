#include "holberton.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - generate valid passwords for a program
 *return: 0
 */
int main(void)
{
srand(time(0));
int num = rand();
rintf("%i\n", num);
return (0);
}
