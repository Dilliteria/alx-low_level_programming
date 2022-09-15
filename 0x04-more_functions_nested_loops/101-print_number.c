#include "main.h"
/**
 * print_number -prints numbers
 * @n:number to be printed
 * Return:void
 */
void print number(int n)
{
unsigned int x:
x = n;
	if (n < 0)
	{
	putchar(45);
	x = -n;
	}
	if (x / 10)
	print_number(x / 10);
	_putchar ((x % 10) + '0');
}
