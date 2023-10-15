#include "main.h"
#include <stdio.h>

/**
 * main - test for string printing
 * 
 * Return: 0
 */

int main (void)
{
	char *arg = "A";

	handle_str(arg);
	_putchar('\n');
	printf("%s\n", arg);

	handle_str("my life is good");
	_putchar('\n');
	printf("my life is good\n");

	return (0);
}
