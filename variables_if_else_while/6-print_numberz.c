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
	int num;

	for (num = 0; num < 10; num++)
	{
	putchar((num % 10) + '0');
	}
	putchar('\n');
	return (0);
}
