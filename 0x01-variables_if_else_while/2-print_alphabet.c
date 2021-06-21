#include <stdio.h>

/**
 *main- print lower case letters from a to z using putchar
 *Return: 0
 */
int main(void)
{
char a  = 'a';
while (a <= 'z')
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
