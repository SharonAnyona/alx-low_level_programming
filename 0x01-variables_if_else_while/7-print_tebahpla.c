#include <stdio.h>

/**
* main - Print the alphabet in lowercase letters in reverse
* Return: 0
*/
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	putchar(l);

	putchar('\n');

	return (0);
}
