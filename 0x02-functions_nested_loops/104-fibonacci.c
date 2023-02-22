#include <stdio.h>
#include <stdlib.h>
/** 
* main - prints the first 98 Fibonacci numbers, starting with
* 1 and 2, separated by a comma followed by a space.
* Return: Always 0
*/
int main(void)
{
const int numFib = 98;
long long *fib = (long long *) malloc(numFib * sizeof(long long));
if (fib == NULL)
{
printf("Error: could not allocate memory\n");
return 1;
}
fib[0] = 1;
fib[1] = 2;
for (int i = 2; i < numFib; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
}
for (int i = 0; i < numFib - 1; i++)
{
printf("%lld, ", fib[i]);
}
printf("%lld\n", fib[numFib - 1]);
free(fib);
return 0;
}

