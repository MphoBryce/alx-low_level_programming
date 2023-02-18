#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then upperase,
 * followed by a new line
 * Return: 0 (Sucessess)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
		purtchar('\n');
return (0);
}
