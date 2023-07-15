#include "main.h"
/**
* _strspn - The program fro entry point
* @s: input
* @accept: input
* Return: Always 0 (Success)
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int b = 0;
int b;
while (*b)
{
for (b = 0; accept[b]; b++)
{
if (*b == accept[b])
{
b++;
break;
}
else if (accept[b + 1] == '\0')
return (b);
}
b++;
}
return (n);
}
