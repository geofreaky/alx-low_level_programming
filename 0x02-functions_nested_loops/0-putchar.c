#include "main.h"
/**
 * main - main function
 *
 * Return: End program
 */
int main(void)
{
	char string[8] = "putchar";
	int n = 0;

	while (n < 8)
	{	putchar(string[n]);
		++n;
	}
	putchar(10);
	return (0);
}
