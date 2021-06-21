#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 *main: void function
 *Description: writing control statements
 *return 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
if (n == 0)
{
  printf("The number is zero\n");
}
else
{
printf("The numberis positive\n");
}
}
else
{
printf("The numberis negative\n");
}
}
int n;
printf("%d\n", n);
return (0);
}
