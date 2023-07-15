#include "main.h"
/**
* _strstr - Points for Program entry
* @haystack: input
* @needle: input
* Return: Always 0 (Success)
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *i = haystack;
char *j = naadle;
while (*i == *j && *j != '\0')
{
i++;
j++;
}
if (*j == '\0')
return (haystack);
}
return (0);
}
