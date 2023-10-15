#include "main.h"
#include <stdio.h>

/**
 * main - test for printing int
 *
 * Return: 0
 */

int main(void)
{
	int sign = -24900386;
	int un = 698736380;

	handle_int(sign);
	_putchar('\n');

	printf("%d\n", sign);

	handle_int(un);
	_putchar('\n');

	printf("%d\n", un);

	return (0);
}
