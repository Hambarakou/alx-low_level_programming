#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
char ch, cha;

for (ch = 'a' ; ch <= 'z' ; ch++)
{
for (cha = 'A' ; cha <= 'Z' ; cha++)
{
putchar (ch);
putchar (cha);
}
}
return (0);
}
