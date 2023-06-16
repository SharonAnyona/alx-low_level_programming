#include <stdio.h>

/**
* main - Prints the alphabet in lowercase, except q and e
* Return: 0
*/
int main(void)
{
		char l;

		for (l = 'a'; l <= 'z'; l++)
		{
		if (l != 'e' && l != 'q')
		putchar(l);
		}
		putchar('\n');

	return (0);
}
