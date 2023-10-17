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

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
