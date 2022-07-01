#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (success)
 */
int main(void)
{
char c;
int i;
long int longi;
long long int lx2_i;
float f;
printf("Size of a char:%d byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int:%d byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int:%d byte(s)\n", (unsigned long)sizeof(longi));
printf("Size of a long long int:%d byte(s)\n", (unsigned long)sizeof(lx2_i));
printf("Size of a float:%d byte(s)\n", (unsigned long)sizeof(f));

return(0);
}
