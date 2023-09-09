#include <stdio.h>
/**
 * main - the main function
 *
 * Return: 0 to success
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
		putchar('\n');
		return (0);
}
