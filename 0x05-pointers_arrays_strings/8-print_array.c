#include "main.h"

/**
 * print_array - A function that prints n elements of an array
 * @a: Array name
 * @n: Is the number of elements of the array to be printed
 * Return: a and n inpits
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		print("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
		printf("\n"):
}