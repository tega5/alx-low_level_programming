#include "main.h"

/**
 * puts2 - Function should print only one charcater out of two
 * starting with the first one
 * @str: Input
 * Return: print
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

		i++
	}
	_putchar('\n');
}
