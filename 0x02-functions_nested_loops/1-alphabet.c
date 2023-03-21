#include "main.h"
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
/**
* print_alphabet - alphabet
*
* Return: void
*/
void print_alphabet(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
return;
}
print_alphabet();
return (0);
}
