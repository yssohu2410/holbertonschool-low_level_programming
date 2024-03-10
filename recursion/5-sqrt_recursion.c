#include "main.h"
/**
 * sqrt_checker - finds square root
 * @root: given number to find square root of it
 * @y: base case for recursion
 * Return: square
 */
int sqrt_checker(int root, int y)
{
if (y * y == root)
{
return (y);
}
else if (y * y > root)
{
return (-1);
}
else
{
return (sqrt_checker(root, y + 1));
}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: square root of given number
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
{
return (sqrt_checker(n, 0));
}
}
