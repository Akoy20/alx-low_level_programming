#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main -> assign a random number to the variable n each time it is executed
* and print the last digit of the number stored in the variable n
* Return: Always 0 (success)
*/
int main(void)
{
int n;	
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
printf("last digit of %d is %d and is greater than 5", n, n % 10);
if (n == 5)
{
printf("last digit of %d is %d and is 0", n, n % 10);
}
if (n < 6 && n != 0)
{
printf("last digit of %d is %d and is less than 6 and not 0", n, n % 10)
}
printf("\n");

return (0);
}
