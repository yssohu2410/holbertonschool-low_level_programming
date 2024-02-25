#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'this code for print text on screen'
 *
 * Return: Always 0 (Success)
 */
int main (void)
{char x = '0';
char y = 'a';
for (x = '0'; x <= '9'; x++)
{putchar(x); }
for (y = 'a'; y <= 'f'; y++)
{putchar(y); }
putchar('\n'); 
return (0);
}
