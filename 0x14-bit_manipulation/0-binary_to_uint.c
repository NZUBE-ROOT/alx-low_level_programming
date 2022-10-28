#include <stdio.h>
#include "main.h"
int getPower(int);

/**
 * getPower - to calculate the product of 2 power of a number
 * @i: the power
 * Return: product
 */

int getPower(int i)
{
	int k, prod = 1;

	for (k = 1; k < i; k++)
	{
		prod = prod * 2;
	}
	return (prod);
}

/**
 * binary_to_uint - to convert a binary number to denary
 * @b: stores the address of a binary number
 * Return: a denary value else 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, k, denary_number = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	k = i--;
	i = 0;

	while (b[i] != '\0')
	{
		if (b[i] == '1')
		{
			denary_number = denary_number + getPower(k);
		}
		k--;
		i++;
	}
	return (denary_number);
}
