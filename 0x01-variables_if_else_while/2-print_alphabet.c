#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *Include additional headers if necessary
 *main - Entry point of the program
 *the program print alphabets lowercase.
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return(0);
}
