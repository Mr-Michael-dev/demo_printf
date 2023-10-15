#include "main.h"
#include <stdio.h>


int handle_int(int arg)
{
	char temp[24];
	int i = 0;

	if (arg < 0)
	{
		_putchar('-');
		arg = -arg;
	}

	if (arg == 0)
	{
		_putchar('0');
	} else
	{
		while (arg > 0)
		{
			temp[i++] = '0' + (arg % 10);
			arg /= 10;
                }

		while (i > 0)
		{
			_putchar(temp[--i]);
		}
	}

	return (0);
}
