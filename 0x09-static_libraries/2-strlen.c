#include "main.h"
/**
* _strlen - Length of a string returns program
* @s: length of string
*/
int _strlen(char *s)
{
int longa = 0;
while (*s != '\0')
{
longa++;
s++;
}
return (longa);
}
