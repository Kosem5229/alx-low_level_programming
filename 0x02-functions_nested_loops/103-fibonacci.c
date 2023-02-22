#include <stdio.h>

/**
* main - prints the sum of even Fibonacci numbers whose value
* does not exceed 4,000,000.
*
* Return: Always 0
*/
int main(void)
{
int prev = 1, curr = 2, next = 0, sum = 2;

while (next <= 4000000)
{
next = prev + curr;
prev = curr;
curr = next;

if (next % 2 == 0)
sum += next;
}

printf("%d\n", sum);

return (0);
}

