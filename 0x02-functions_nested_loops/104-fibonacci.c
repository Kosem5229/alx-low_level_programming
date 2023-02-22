#include <stdio.h>
/**
*main - prints the sum of even Fibonacci numbers whose value
*does not exceed 4,000,000.
*Return: Always 0
*/
	int main(void)

{
int numFib = 100;
int a = 1, b = 2;
int sum = 2; /* */ start with sum = 2 to account for initial even number
for (int i = 3; i <= numFib && b <= 4000000; i++)
{
int c = a + b;
if (c % 2 == 0)
{
sum += c;
}
a = b;
b = c;
}
printf("%d\n", sum);
return (0);
}

