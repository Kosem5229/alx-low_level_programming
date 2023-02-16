#include <unistd.h>
/**
* main - Entry point
*
* Return: Always 1 (Error code)
*/
int main(void)
{
const char *msg = "and that art is useful\" - Dora Korpar, 2015-10-19\n";
const int len = 38;
write(2, msg, len);
return (1);
}

