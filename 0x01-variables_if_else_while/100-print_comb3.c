#include <stdio.h>

/**
<<<<<<< HEAD
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
=======
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
>>>>>>> 6bb572f5b614cde113e625af9c9656fb8ceb90e0
		}
	}
	putchar('\n');
	return (0);
}
<<<<<<< HEAD
=======

>>>>>>> 6bb572f5b614cde113e625af9c9656fb8ceb90e0
