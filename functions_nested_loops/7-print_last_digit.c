#include "main.h"

/**
* print_last_digit - Enter point
*
* Description: prints the last digit of a number.
* @n: the last digit of a number being printed
*
* Return: 0
*/
int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (lastdigit < 0)
	lastdigit *= -1;

	_putchar (lastdigit + '0');
	return (lastdigit);
}
