#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - function
 *
 * Return: Always (Success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
putchar(letter);
}
putchar('\n');
return (0);
}
