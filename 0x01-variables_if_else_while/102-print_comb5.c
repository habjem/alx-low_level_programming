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
	int i, j, k, l;

	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			k = i;
			while (k <= '9')
			{
				l = j + 1;
				while (l <= '9')
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i < '9' || j < '8')
					{
					putchar(',');
					putchar(' ');
					}
				l++;
				}
			k++;
			}
		j++;
		}
	i++;
	}
	putchar('\n');
	return (0);
}
