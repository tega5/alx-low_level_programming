#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	char ch = 'B';

	if (_isupper(ch))
	{
		printf("%c is an uppercase letter.\n", ch);
	}
	else
	{
		printf("%c is not an uppercase letter.\n", ch);
	}

	return (0);
}
