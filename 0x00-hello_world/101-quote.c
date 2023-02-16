#include <unistd.h>
/**
* main - Entry point
*
* Return: Always 1 (Error code)
*/
int main(void)
{
const char *msg1 = "and that piece of art is useful\" - ";
const char *msg2 = "Dora Korpar, 2015-10-19\n";
write(2, msg1, 36);
write(2, msg2, 30);
return (1);
}
