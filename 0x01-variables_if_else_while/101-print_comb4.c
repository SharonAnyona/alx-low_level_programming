#include <stdio.h>
#include <stdlib.h>
/**
 * main - start
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: 0
 */
int main(void)
{
	int x;
	int y;
	int z = 0;

	while (z < 10)
	{
		d = 0;
		while (y < 10)
		{
			x = 0;
			while (x < 10)
			{
				if (x != y && y != z && z < y && y < c)
				{
					putchar('0' + z);
					putchar('0' + y);
					putchar('0' + x);

					if (x + y + z != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}

				x++;
			}
			y++;
		}
		z++;
	}
	putchar('\n');
	return (0);
}
