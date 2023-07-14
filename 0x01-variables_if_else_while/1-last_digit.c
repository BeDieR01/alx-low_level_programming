#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int ls;
ls = n%10;
if (ls == 0)
{
printf("Last digit of %d is %d and is 0\n", n, ls);
}
else if (ls < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ls);
}
else
{
printf("Last digit of %d is %d and is greater than 5\n", n, ls);
}
return (0);
}
