#include <stdio.h>
/**
 * main - main function
 *
 * Return: end the program
 */
int main(void)

{	
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{	if (letter != 'e' && letter != 'q')
		putchar(letter);
	}
	putchar('\n');
	return (0);
	;
}
