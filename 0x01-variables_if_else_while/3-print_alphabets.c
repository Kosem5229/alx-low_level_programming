#include <stdio.h>
/**
* main - entry point
* Description: Prints the alphabet in lowercase and then in uppercase
* Return: 0 (success)
*/
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
ch = 'A';
while (ch <= 'Z')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}

