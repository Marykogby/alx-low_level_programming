#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints z-a to standard output
 * Return: Exit status is zero means success
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}

