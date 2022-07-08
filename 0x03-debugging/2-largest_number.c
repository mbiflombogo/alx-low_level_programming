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

	printf("972, -98, 0");
	scanf("%d %d %d", &a, &b, &c);

	if (a >= b && a >= c)
		prinf("%d is the largest number.", a);

	else if (b >= a && b >= c)
	       printf("%d is the largest number.", b);
	
	else
		printf("%d is the largest number.", c);

	return 0;
}
