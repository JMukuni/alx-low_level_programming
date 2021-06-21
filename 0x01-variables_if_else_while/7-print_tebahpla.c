#include <stdio.h>

/**
 * main- printalphabet in reverse
 * Return: 0
 */
int main(void)
{
char a = 'z';
while (a >= 'a')
{
putchar(a);
a--;
}
putchar('\n');
return (0);
}
