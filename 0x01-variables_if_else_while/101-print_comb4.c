#include <stdio.h>

/**
* main - Prints all the numbers of base 16 in lowercase.
*
*Return: Always 0.
*/

int main(void)
{
char digit[4];
for (int i = 0; i < 8; i++)
{
for (int j = i + 1; j < 9; j++)
{
for (int k = j + 1; k < 10; k++)
{
digit[0] = i + '0';
digit[1] = j + '0';
digit[2] = k + '0';
digit[3] = '\0';
printf("%s\n", digit);
}
}
}
return (0);
}
