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
{
int num = n
if (num > 0)
{
if (num == 0)
{
printf("The number is zero\n");
}
else
{
printf("The number is positive\n");
}
else
{
printf("The number is negative\n");
}
}
}
return (0);
}
