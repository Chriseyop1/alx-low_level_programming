#include "main.h"
/**
* _puts - The program for prints a string to stdout.
* @str: String to be printed.
* _putchar prints a new line
*/
void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar('\n');
}
