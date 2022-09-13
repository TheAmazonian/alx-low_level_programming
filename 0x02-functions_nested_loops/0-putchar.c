#include <stdio.h>
/*
 * main - Entry point
 *
 * Return: always 0
 *
 */
int main()
{
	int i;

	putchar ('X');
	putchar (' ');
	for  (i=1; i<=10; i++)
	{
		putchar ('!');
	}
	putchar ('\n');

	return 0;
}
