#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int lastDigit;
lastDigit = n % 10;
printf("The last digit of %d ", n);
if (lastDigit == 0)
{
printf("and is 0\n");
}
else if (lastDigit > 5)
{
printf("and is greater than 5 ");
}
else if (lastDigit < 6 && lastDigit != 0)
{
printf(" and is less than 6 and not 0\n");
}
return (0);
}
