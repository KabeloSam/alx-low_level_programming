#include <stdio.h>

/**
 * main -this function prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	while(i < 52)
	{
		putchar(alphabet[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
