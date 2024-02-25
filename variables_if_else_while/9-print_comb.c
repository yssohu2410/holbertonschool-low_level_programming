#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'this code for print text on screen'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{char x = '0';
for (x = '0'; x <= 9; x++)
{	putchar(x);
	if (x != '9')
{	putchar(',');
	putchar(' '); }}
putchar('\n');
return (0);}
