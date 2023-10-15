#include "main.h"
#include <stdio.h>

/**
 * main - test for char printing
 * 
 * Return: 0
 */

int main (void)
{
	char arg = 'A';

	handle_char(arg);
	_putchar('\n');
	printf("%c\n", arg);

	handle_char('B');
	_putchar('\n');
	printf("C\n");

	return (0);
}
