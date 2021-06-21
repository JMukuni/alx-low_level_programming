#include <stdio.h>
/**
 * main- print out all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
int num;
for (num = 48; num < 58; num++)
putchar(num);
for (num = 'a';  <= 'f'; num++)
putchar(num);
putchar('\n');
return (0);
}
