#include "main.h"

/**
 * handle_str - prints a string
 * @arg: string to be printed
 *
 * Return: 0
 */

int handle_str(char *arg)
{
	char *new_str = malloc(strlen(arg) + 1);

	if (new_str == NULL)
	{
		return (-1);
	}

	strcpy(new_str, arg);
	while (new_str != NULL)
	{
		_putchar(*new_str);
		new_str++;
	}

	free(new_str);
	return (0);
}
