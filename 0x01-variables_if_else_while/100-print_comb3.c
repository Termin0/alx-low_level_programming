#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i + j) % 2 == 1)
			{
				putchar (i + '0');
				putchar (j + '0');
				if (i == 9 && j == 9)
				{
					break;
				}
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
