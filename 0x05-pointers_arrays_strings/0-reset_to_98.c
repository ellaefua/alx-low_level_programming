#include "main.h"

/**
 * main - Entry level
 * @n: the number
 * Return: Always 0
 */

int main(void)
{
	int n;
	n = 402;
	int *ip;
	ip = &n;

	printf("n = %d\n", n);
	reset_to_98(&n);
	printf("n = %d\n", n);
	return (0);;
}
