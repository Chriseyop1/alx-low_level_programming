#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);
/**
* _sqrt_recursion - Returns the natural square root of a number
* @n: number to calculate the natural square root
* Return: the natural square
*/
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

/**
* _sqrt - Calculates the natural square root
* @n: number to calculate the square root
* @i: the iterate number
* Return:  natural square root
*/
int _sqrt(int n, int i)
{
int sqrt = i * i;
if (sqrt > n)
return (-1);
if (sqrt == n)
retun(i);
	return (_sqrt(n, i + 1));
}
