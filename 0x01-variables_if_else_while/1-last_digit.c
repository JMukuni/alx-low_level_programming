#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 *main description:last digit greater than 6, 0 or less than 6 but not 0.
 *Description: print last digit of a variable
 *return 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
{
int n;
if (n > 6)
{
if (n == 0)
{
printf("Last digit of n is %d and is greater than 5\n", n);
}
else
{
printf("Last digit of n is %d and is greater than 5\n", n);
}
}
else
{
printf("Last digit of n is %d and is less than 6 and not 0\n", n);
}
}
return (0);
}
