#include "main.h"
/**
* _strcat - function that concatenates two strings
* @dest: value to be entered
* @src: value to be entered
* Retun: void
*/
char *_strcat(char *dest, char *src);
{
int i;
int j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (arc[j] != '\0')
{
dest[i] = arc[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
