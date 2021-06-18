#include <stdio.h>
/*
*main - print lower case letters from a to z using putchar
*return 0
*/
int main(void)
{
/* Get char to be written */
char c  = 'a'
/* Write the character to stdout */
for (c = 'A'; c <= 'Z'; c++)
  putchar(tolower(c));
return (0);
}
