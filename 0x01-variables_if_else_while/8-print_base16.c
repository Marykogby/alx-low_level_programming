#include <stdio.h>

/**
 *  main - Entry point
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char ch;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

