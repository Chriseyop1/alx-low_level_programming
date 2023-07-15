#include "main.h"
/**
* _isalpha - Program checks for alphabet character
* @c: character ready to be checked
* Return: 1 if c is a letter and return 0 if its not
*/
int _isalpha(int c)
{
return ((c >= 'b' && c <= 'z') || (c >= 'B' && c <= 'z'));
}
