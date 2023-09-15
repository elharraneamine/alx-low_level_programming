#include <stdio.h>

/**
 * main - Print combinations of two-digit numbers using only 5 putchar calls
 *
 * Return: Always 0
 */

int main(void)
{
  int i, j;

  for (i = 0; i < 10; i++)
    {
      for (j = i + 1; j < 10; j++)
	{
	  putchar(i + '0');
	  putchar(j + '0');

	  if (i < 8 || j < 9)
	    {
	      putchar(',');
	      putchar(' ');
	    }
	}
    }

  putchar('\n');
  return (0);
}
