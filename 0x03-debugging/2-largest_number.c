#include <stdio.h>
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 *
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	printf("972, -98, 0\n");
	scanf("%d %d %d", &a, &b, &c);
	printf("a = %d\tb = %d\tc =%d\n", a, b, c);

	if (a > b && a > c)
	{
		printf("%d is the largest number\n", a);
	}
	else if (b > a && b > c)
	{
		printf("%d is the largest number\n", b);
	}
	else
	{
		printf("%d is the largest number\n", c);
	}
}
