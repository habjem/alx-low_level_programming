#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int n = '0';

	do {
		putchar(n);
		n++;
	} while (n <= '9');
	putchar('\n');
	return (0);
}
