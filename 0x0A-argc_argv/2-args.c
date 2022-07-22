#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints all the arguments a program receives.
 *
 *@argc: number of arguments
 *
 *@argv: array of arguments.
 *
 *Return: Always (0) success.
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
